#include <stdio.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdbool.h>

// Atomic variables
atomic_int atomic_counter = 0;
atomic_bool flag = false;

// Function prototypes
void* atomic_increment(void* arg);
bool compare_and_swap_example(atomic_int* ptr, int expected, int desired);

// TODO: Implement functions below

void* atomic_increment(void* arg) {
    // TODO: Increment atomic counter 100000 times
    // Use atomic_fetch_add or atomic_fetch_add_explicit
    
    return NULL;
}

bool compare_and_swap_example(atomic_int* ptr, int expected, int desired) {
    // TODO: Implement compare-and-swap using atomic_compare_exchange_strong
    // Return true if swap was successful
    return false;
}

int main() {
    pthread_t threads[4];
    
    // TODO: Create multiple threads to test atomic operations
    
    // TODO: Join all threads
    
    printf("Final atomic counter: %d\n", atomic_load(&atomic_counter));
    
    // TODO: Test compare-and-swap
    
    return 0;
}

// Compile with: gcc -pthread atomic_ops.c -o atomic_ops
