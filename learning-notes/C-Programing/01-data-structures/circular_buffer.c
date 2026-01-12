#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 16

typedef struct {
    uint8_t buffer[BUFFER_SIZE];
    volatile size_t head;
    volatile size_t tail;
    volatile size_t count;
} CircularBuffer;

// Function prototypes
void cb_init(CircularBuffer* cb);
bool cb_is_full(CircularBuffer* cb);
bool cb_is_empty(CircularBuffer* cb);
bool cb_push(CircularBuffer* cb, uint8_t data);
bool cb_pop(CircularBuffer* cb, uint8_t* data);
size_t cb_size(CircularBuffer* cb);

// TODO: Implement all functions below

void cb_init(CircularBuffer* cb) {
    // TODO: Initialize circular buffer
}

bool cb_is_full(CircularBuffer* cb) {
    // TODO: Check if buffer is full
    return false;
}

bool cb_is_empty(CircularBuffer* cb) {
    // TODO: Check if buffer is empty
    return false;
}

bool cb_push(CircularBuffer* cb, uint8_t data) {
    // TODO: Add element to buffer (check if full first)
    // Handle wrap-around
    return false;
}

bool cb_pop(CircularBuffer* cb, uint8_t* data) {
    // TODO: Remove element from buffer (check if empty first)
    // Handle wrap-around
    return false;
}

size_t cb_size(CircularBuffer* cb) {
    // TODO: Return current number of elements
    return 0;
}

int main() {
    CircularBuffer cb;
    cb_init(&cb);
    
    // TODO: Test your implementation
    
    return 0;
}
