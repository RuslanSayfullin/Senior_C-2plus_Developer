#include <iostream>
#include <thread>
#include <queue>

struct Message {
    int data;
};

std::queue<Message*> msgQueue;

void sender() {
    for(int i = 0; i < 5; ++i) {
        Message* msg = new Message();
        msg->data = i;
        msgQueue.push(msg);
        std::cout << "Sent: " << msg->data << std::endl;
    }
}

void receiver() {
    while(true) {
        if(msgQueue.empty()) {
            break;
        }
        Message* msg = msgQueue.front();
        msgQueue.pop();
        std::cout << "Receiver: " << msg->data << std::endl;
        delete msg;
    }
}

int main() {

    std::thread t1(sender);
    std::thread t2(receiver);

    t1.join();
    t2.join();

    return 0;
}