#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>

// Global flag for signal handling
volatile sig_atomic_t signal_received = 0;
volatile sig_atomic_t signal_count = 0;

// Function prototypes
void signal_handler(int signum);
void setup_signal_handlers();
void block_signal(int signum);
void unblock_signal(int signum);

// TODO: Implement all functions below

void signal_handler(int signum) {
    // TODO: Handle different signals
    // Note: This is an async-signal-safe handler
    // Only use async-signal-safe functions here
    
    signal_received = signum;
    signal_count++;
}

void setup_signal_handlers() {
    // TODO: Register signal handlers for SIGINT, SIGTERM, SIGUSR1
    // Use signal() or sigaction()
}

void block_signal(int signum) {
    // TODO: Block specific signal
    // Use sigprocmask()
}

void unblock_signal(int signum) {
    // TODO: Unblock specific signal
}

int main() {
    printf("Signal handling demo (PID: %d)\n", getpid());
    printf("Press Ctrl+C to send SIGINT\n");
    printf("Send SIGUSR1: kill -USR1 %d\n", getpid());
    
    // TODO: Setup signal handlers
    
    // TODO: Main loop - wait for signals
    while (1) {
        if (signal_received) {
            printf("Received signal %d (count: %d)\n", 
                   signal_received, signal_count);
            signal_received = 0;
        }
        sleep(1);
    }
    
    return 0;
}
