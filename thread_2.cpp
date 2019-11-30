#include <thread>
#include <iostream>

class MyClass{
public:
    MyClass() {
        std::cout << "Constructor" << std::endl;
    }

    MyClass(const MyClass& other) {
        std::cout << "Copy" << std::endl;
    }


    MyClass(const MyClass&& other) {
        std::cout << "Move" << std::endl;
    }

    MyClass& operator=(const MyClass &other){
        std::cout << "Copy operator" << std::endl;
        return *this;
    }

    MyClass& operator=(MyClass &&other) noexcept{
        std::cout << "Move operator" << std::endl;
        return *this;
    }

    void operator()(const char* param) {
        std::cout << param << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor" << std::endl;
    }
};

int main() {
    // copy operation
    std::thread my_thread(MyClass(),"Hello world!");
    
    // move operation  
    //std::thread my_thread(std::move(MyClass()),"Hello world!");
    
    // no move or copy
    //MyClass cls;
    //std::thread my_thread(std::ref(cls),"Hello world!");
    
    
    my_thread.join();
    return 0;
}

