#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Shared counter
int counter = 0;
pthread_mutex_t counter_mutex;

// Function prototypes
void* increment_counter(void* arg);
void* decrement_counter(void* arg);

// TODO: Implement thread functions below

void* increment_counter(void* arg) {
    // TODO: Increment counter 100000 times
    // Use mutex to protect critical section
    
    return NULL;
}

void* decrement_counter(void* arg) {
    // TODO: Decrement counter 100000 times
    // Use mutex to protect critical section
    
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    
    // TODO: Initialize mutex
    
    // TODO: Create threads
    
    // TODO: Join threads
    
    // TODO: Destroy mutex
    
    printf("Final counter value: %d (should be 0)\n", counter);
    
    return 0;
}

// Compile with: gcc -pthread mutex_example.c -o mutex_example
