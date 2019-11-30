#include <thread>
#include <mutex>
#include <iostream>
#include <chrono>

class ThreadFunction{
private:
    std::mutex mtx;
    bool work;

public:
    ThreadFunction() : work{false} {};
    void operator()()
    {
        work = true;

        bool cnt = true;
        while (cnt)
        {
            {
                std::lock_guard<std::mutex> lck(mtx);
                cnt = work;
            }

            std::cout << '.';
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    void stop(){
        std::lock_guard<std::mutex> lck(mtx);
        work = false;
    }
};


auto main() -> int {
    ThreadFunction tf;
    std::thread thread(std::ref(tf));
    std::cin.get();
    tf.stop();
    thread.join();
    return 1;
}