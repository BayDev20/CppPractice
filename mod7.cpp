//============================================================================
// Name        : mod7.cpp
// Author      : Cody Beggs
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <mutex>

std::mutex coutMutex;

// Count up to 20
void countUp() {
    for (int i = 1; i <= 20; ++i) {
        {
            std::lock_guard<std::mutex> lock(coutMutex);
            std::cout << "Counting up: " << i << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
}

// Count down to 0
void countDown() {
    for (int i = 20; i >= 0; --i) {
        {
            std::lock_guard<std::mutex> lock(coutMutex);
            std::cout << "Counting down: " << i << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main() {
    // Creates threads
    std::thread t1(countUp);
    std::thread t2(countDown);

    // Waiting on threads
    t1.join();
    t2.join();

    std::cout << "Task Finished." << std::endl;

    return 0;
}