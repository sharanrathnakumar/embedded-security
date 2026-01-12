#include <stdio.h>
#include <stdint.h>

// Function prototypes
void set_bit(uint32_t* num, uint8_t pos);
void clear_bit(uint32_t* num, uint8_t pos);
void toggle_bit(uint32_t* num, uint8_t pos);
int check_bit(uint32_t num, uint8_t pos);
uint32_t swap_nibbles(uint32_t num);
uint32_t reverse_bits(uint32_t num);
void print_binary(uint32_t num);

// TODO: Implement all functions below

void set_bit(uint32_t* num, uint8_t pos) {
    // TODO: Set bit at position pos (0-indexed from right)
}

void clear_bit(uint32_t* num, uint8_t pos) {
    // TODO: Clear bit at position pos
}

void toggle_bit(uint32_t* num, uint8_t pos) {
    // TODO: Toggle bit at position pos
}

int check_bit(uint32_t num, uint8_t pos) {
    // TODO: Return 1 if bit is set, 0 otherwise
    return 0;
}

uint32_t swap_nibbles(uint32_t num) {
    // TODO: Swap lower and upper nibbles of a byte
    // Example: 0xAB -> 0xBA
    return 0;
}

uint32_t reverse_bits(uint32_t num) {
    // TODO: Reverse all 32 bits
    return 0;
}

void print_binary(uint32_t num) {
    // TODO: Print number in binary format
    printf("0b");
    // Print bits from MSB to LSB
    printf("\n");
}

int main() {
    uint32_t num = 0x00;
    
    // TODO: Test your implementations
    
    return 0;
}
