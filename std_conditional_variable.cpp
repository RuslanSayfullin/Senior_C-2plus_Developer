#include <iostream>
#include <thread>
#include <conditional_variable>

std::conditional_variable cv;
std::mutex mtx;
bool ready = false;

void worker() {
    std::cout << "Worker: Waiting for a signal..." << std::endl;

    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return ready; });

    std::cout << "Worker: Got the signal!" << std::endl;
}

int main() {
    std::thread workerThread(worker);

    std::this_thread::sleep_for(std::chrono::seconds(2));

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
        cv.notify_one();
    }

    workerThread.join();

    return 0;
}