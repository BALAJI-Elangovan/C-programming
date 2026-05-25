#include <iostream>
#include <csignal>
#include <pthread.h>
#include <unistd.h>
#include <cstdlib>

volatile sig_atomic_t shouldFree = 0;
void* ptr = nullptr;

void signalHandler(int) {
    shouldFree = 1;
}

void* allocator(void*) {
    ptr = malloc(1024);
    std::cout << "Memory allocated\n";
    sleep(1);
    pthread_kill(pthread_self(), SIGUSR1); // Send signal to self
    return nullptr;
}

void* deallocator(void*) {
    while (!shouldFree)
        usleep(100000); // Wait for signal
    if (ptr) {
        free(ptr);
        std::cout << "Memory freed\n";
    }
    return nullptr;
}

int main() {
    signal(SIGUSR1, signalHandler);

    pthread_t t1, t2;
    pthread_create(&t1, nullptr, allocator, nullptr);
    pthread_create(&t2, nullptr, deallocator, nullptr);

    pthread_join(t1, nullptr);
    pthread_join(t2, nullptr);

    return 0;
}
