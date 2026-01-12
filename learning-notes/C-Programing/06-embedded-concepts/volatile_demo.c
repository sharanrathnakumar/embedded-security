#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Simulated hardware register addresses
#define GPIO_PORT_A     ((volatile uint32_t*)0x40020000)
#define STATUS_REG      ((volatile uint32_t*)0x40020004)
#define CONTROL_REG     ((volatile uint32_t*)0x40020008)

// Simulated memory-mapped register
volatile uint32_t simulated_register = 0;

// Function prototypes
void demo_volatile_necessity();
void read_hw_register(volatile uint32_t* reg);
void write_hw_register(volatile uint32_t* reg, uint32_t value);

// TODO: Implement functions below

void demo_volatile_necessity() {
    // TODO: Demonstrate why volatile is needed
    // Without volatile, compiler may optimize away reads
    
    volatile uint32_t* hw_reg = &simulated_register;
    
    // TODO: Show polling loop that wouldn't work without volatile
    printf("Waiting for register to change...\n");
    
}

void read_hw_register(volatile uint32_t* reg) {
    // TODO: Read from hardware register
    // Note the volatile qualifier
    printf("Register value: 0x%X\n", *reg);
}

void write_hw_register(volatile uint32_t* reg, uint32_t value) {
    // TODO: Write to hardware register
    // Ensure write is not optimized away
}

int main() {
    // TODO: Demonstrate volatile usage
    
    // Example: simulate memory-mapped I/O
    printf("Simulating hardware register access:\n");
    
    return 0;
}
