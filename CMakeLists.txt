cmake_minimum_required(VERSION 3.5)

project(Examples_13)

find_package(Threads)

add_executable(thread_1 thread_1.cpp)
set_target_properties(thread_1 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(thread_1 ${CMAKE_THREAD_LIBS_INIT})

add_executable(thread_2 thread_2.cpp)
set_target_properties(thread_2 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(thread_2 ${CMAKE_THREAD_LIBS_INIT})

add_executable(scoped_thread scoped_thread.cpp)
set_target_properties(scoped_thread PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(scoped_thread ${CMAKE_THREAD_LIBS_INIT})

add_executable(race_condition_1 race_condition_1.cpp)
set_target_properties(race_condition_1 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(race_condition_1 ${CMAKE_THREAD_LIBS_INIT})

add_executable(mutex_1 mutex_1.cpp)
set_target_properties(mutex_1 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(mutex_1 ${CMAKE_THREAD_LIBS_INIT})

add_executable(mutex_2 mutex_2.cpp)
set_target_properties(mutex_2 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(mutex_2 ${CMAKE_THREAD_LIBS_INIT})

add_executable(lock_guard_1 lock_guard_1.cpp)
set_target_properties(lock_guard_1 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(lock_guard_1 ${CMAKE_THREAD_LIBS_INIT})

add_executable(lock_guard_2 lock_guard_2.cpp)
set_target_properties(lock_guard_2 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(lock_guard_2 ${CMAKE_THREAD_LIBS_INIT})

add_executable(no_race_condition no_race_condition.cpp)
set_target_properties(no_race_condition PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(no_race_condition ${CMAKE_THREAD_LIBS_INIT})

add_executable(tlc tlc.cpp)
set_target_properties(tlc PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(tlc ${CMAKE_THREAD_LIBS_INIT})

add_executable(stack stack.cpp)
set_target_properties(stack PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(stack ${CMAKE_THREAD_LIBS_INIT})

add_executable(dead_lock dead_lock.cpp)
set_target_properties(dead_lock PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(dead_lock ${CMAKE_THREAD_LIBS_INIT})

add_executable(pass_out pass_out.cpp)
set_target_properties(pass_out PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(pass_out ${CMAKE_THREAD_LIBS_INIT})

add_executable(exception exception.cpp)
set_target_properties(exception PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(exception ${CMAKE_THREAD_LIBS_INIT})

add_executable(async_1 async_1.cpp)
set_target_properties(async_1 PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(async_1 ${CMAKE_THREAD_LIBS_INIT})

add_executable(promise promise.cpp)
set_target_properties(promise PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(promise ${CMAKE_THREAD_LIBS_INIT})

add_executable(async_2 async_2.cpp)
set_target_properties(async_2 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_link_libraries(async_2 ${CMAKE_THREAD_LIBS_INIT})

add_executable(thread_stop thread_stop.cpp)
set_target_properties(thread_stop PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
target_link_libraries(thread_stop ${CMAKE_THREAD_LIBS_INIT})