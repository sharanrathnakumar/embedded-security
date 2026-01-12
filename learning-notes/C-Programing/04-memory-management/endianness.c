#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Function prototypes
bool is_big_endian();
bool is_little_endian();
uint16_t swap_uint16(uint16_t val);
uint32_t swap_uint32(uint32_t val);
uint16_t host_to_network_16(uint16_t val);
uint32_t host_to_network_32(uint32_t val);

// TODO: Implement all functions below

bool is_big_endian() {
    // TODO: Detect if system is big endian
    // Hint: Use union or pointer casting
    return false;
}

bool is_little_endian() {
    // TODO: Detect if system is little endian
    return false;
}

uint16_t swap_uint16(uint16_t val) {
    // TODO: Swap bytes in 16-bit value
    // Example: 0x1234 -> 0x3412
    return 0;
}

uint32_t swap_uint32(uint32_t val) {
    // TODO: Swap bytes in 32-bit value
    // Example: 0x12345678 -> 0x78563412
    return 0;
}

uint16_t host_to_network_16(uint16_t val) {
    // TODO: Convert 16-bit value from host to network byte order
    // Network byte order is big endian
    return 0;
}

uint32_t host_to_network_32(uint32_t val) {
    // TODO: Convert 32-bit value from host to network byte order
    return 0;
}

int main() {
    printf("System is %s endian\n", is_big_endian() ? "big" : "little");
    
    // TODO: Test byte swapping functions
    uint32_t test = 0x12345678;
    printf("Original: 0x%X\n", test);
    printf("Swapped:  0x%X\n", swap_uint32(test));
    
    return 0;
}
