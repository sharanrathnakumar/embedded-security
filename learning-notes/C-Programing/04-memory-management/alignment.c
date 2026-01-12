#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Function prototypes
bool is_aligned(void* ptr, size_t alignment);
void* align_pointer(void* ptr, size_t alignment);
size_t calculate_padding(void* ptr, size_t alignment);

// Structure examples
struct Unpacked {
    char a;
    int b;
    char c;
};

struct __attribute__((packed)) Packed {
    char a;
    int b;
    char c;
};

// TODO: Implement all functions below

bool is_aligned(void* ptr, size_t alignment) {
    // TODO: Check if pointer is aligned to given boundary
    // Alignment must be power of 2
    return false;
}

void* align_pointer(void* ptr, size_t alignment) {
    // TODO: Return aligned pointer (round up to next aligned address)
    return NULL;
}

size_t calculate_padding(void* ptr, size_t alignment) {
    // TODO: Calculate bytes needed to align pointer
    return 0;
}

int main() {
    // TODO: Test alignment functions
    
    printf("Size of Unpacked struct: %zu bytes\n", sizeof(struct Unpacked));
    printf("Size of Packed struct: %zu bytes\n", sizeof(struct Packed));
    
    // TODO: Demonstrate alignment effects
    
    return 0;
}
