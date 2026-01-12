#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

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

// Implementation

void cb_init(CircularBuffer* cb) {
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

bool cb_is_full(CircularBuffer* cb) {
    return cb->count == BUFFER_SIZE;
}

bool cb_is_empty(CircularBuffer* cb) {
    return cb->count == 0;
}

bool cb_push(CircularBuffer* cb, uint8_t data) {
    if (cb_is_full(cb)) {
        return false;
    }
    
    cb->buffer[cb->head] = data;
    cb->head = (cb->head + 1) % BUFFER_SIZE;
    cb->count++;
    
    return true;
}

bool cb_pop(CircularBuffer* cb, uint8_t* data) {
    if (cb_is_empty(cb)) {
        return false;
    }
    
    *data = cb->buffer[cb->tail];
    cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    cb->count--;
    
    return true;
}

size_t cb_size(CircularBuffer* cb) {
    return cb->count;
}

int main() {
    CircularBuffer cb;
    cb_init(&cb);
    
    printf("Circular Buffer Test Program\n");
    printf("=============================\n\n");
    
    // Test 1: Check initial state
    printf("Test 1: Initial state\n");
    printf("  Empty: %s\n", cb_is_empty(&cb) ? "Yes" : "No");
    printf("  Full: %s\n", cb_is_full(&cb) ? "Yes" : "No");
    printf("  Size: %zu\n\n", cb_size(&cb));
    
    // Test 2: Push elements
    printf("Test 2: Push elements (0-9)\n");
    for (uint8_t i = 0; i < 10; i++) {
        if (cb_push(&cb, i)) {
            printf("  Pushed: %d (size: %zu)\n", i, cb_size(&cb));
        } else {
            printf("  Failed to push: %d (buffer full)\n", i);
        }
    }
    printf("\n");
    
    // Test 3: Pop some elements
    printf("Test 3: Pop 5 elements\n");
    for (int i = 0; i < 5; i++) {
        uint8_t data;
        if (cb_pop(&cb, &data)) {
            printf("  Popped: %d (size: %zu)\n", data, cb_size(&cb));
        } else {
            printf("  Failed to pop (buffer empty)\n");
        }
    }
    printf("\n");
    
    // Test 4: Push more elements (testing wrap-around)
    printf("Test 4: Push more elements (10-20) - testing wrap-around\n");
    for (uint8_t i = 10; i < 21; i++) {
        if (cb_push(&cb, i)) {
            printf("  Pushed: %d (size: %zu)\n", i, cb_size(&cb));
        } else {
            printf("  Failed to push: %d (buffer full)\n", i);
        }
    }
    printf("\n");
    
    // Test 5: Check full state
    printf("Test 5: Check full state\n");
    printf("  Empty: %s\n", cb_is_empty(&cb) ? "Yes" : "No");
    printf("  Full: %s\n", cb_is_full(&cb) ? "Yes" : "No");
    printf("  Size: %zu\n\n", cb_size(&cb));
    
    // Test 6: Pop all elements
    printf("Test 6: Pop all remaining elements\n");
    while (!cb_is_empty(&cb)) {
        uint8_t data;
        if (cb_pop(&cb, &data)) {
            printf("  Popped: %d (size: %zu)\n", data, cb_size(&cb));
        }
    }
    printf("\n");
    
    // Test 7: Try to pop from empty buffer
    printf("Test 7: Try to pop from empty buffer\n");
    uint8_t data;
    if (cb_pop(&cb, &data)) {
        printf("  Popped: %d\n", data);
    } else {
        printf("  Failed to pop (buffer empty) - Correct!\n");
    }
    printf("\n");
    
    // Test 8: Fill buffer completely
    printf("Test 8: Fill buffer completely (16 elements)\n");
    for (uint8_t i = 0; i < BUFFER_SIZE + 5; i++) {
        if (cb_push(&cb, i * 2)) {
            printf("  Pushed: %d (size: %zu)\n", i * 2, cb_size(&cb));
        } else {
            printf("  Failed to push: %d (buffer full) - Correct!\n", i * 2);
        }
    }
    
    printf("\nAll tests completed successfully!\n");
    
    return 0;
}
