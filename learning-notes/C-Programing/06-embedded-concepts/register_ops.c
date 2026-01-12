#include <stdio.h>
#include <stdint.h>

// Register bit definitions
#define BIT_0   (1U << 0)
#define BIT_1   (1U << 1)
#define BIT_7   (1U << 7)
#define BIT_15  (1U << 15)

// Simulated hardware register
typedef struct {
    volatile uint32_t CR;      // Control Register
    volatile uint32_t SR;      // Status Register
    volatile uint32_t DR;      // Data Register
    volatile uint32_t BR;      // Baud Rate Register
} PeripheralRegs;

// Function prototypes
void set_register_bits(volatile uint32_t* reg, uint32_t bits);
void clear_register_bits(volatile uint32_t* reg, uint32_t bits);
void toggle_register_bits(volatile uint32_t* reg, uint32_t bits);
uint32_t read_register_bits(volatile uint32_t* reg, uint32_t mask);
void write_register_field(volatile uint32_t* reg, uint32_t value, uint32_t mask, uint8_t shift);

// TODO: Implement all functions below

void set_register_bits(volatile uint32_t* reg, uint32_t bits) {
    // TODO: Set specified bits without affecting others
    // Use OR operation
}

void clear_register_bits(volatile uint32_t* reg, uint32_t bits) {
    // TODO: Clear specified bits without affecting others
    // Use AND with complement
}

void toggle_register_bits(volatile uint32_t* reg, uint32_t bits) {
    // TODO: Toggle specified bits
    // Use XOR operation
}

uint32_t read_register_bits(volatile uint32_t* reg, uint32_t mask) {
    // TODO: Read specific bits from register
    return 0;
}

void write_register_field(volatile uint32_t* reg, uint32_t value, uint32_t mask, uint8_t shift) {
    // TODO: Write value to specific bit field
    // Clear field first, then set new value
}

int main() {
    volatile uint32_t control_reg = 0x00000000;
    
    // TODO: Test register operations
    printf("Initial register: 0x%08X\n", control_reg);
    
    return 0;
}
