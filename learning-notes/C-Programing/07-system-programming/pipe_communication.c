#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 256

// Function prototypes
void parent_to_child_demo();
void bidirectional_pipe_demo();

// TODO: Implement all functions below

void parent_to_child_demo() {
    // TODO: Create pipe and fork
    // Parent writes to pipe, child reads from pipe
    
    int pipe_fd[2];  // pipe_fd[0] = read end, pipe_fd[1] = write end
    
    // TODO: Create pipe using pipe()
    
    // TODO: Fork process
    
    // TODO: In parent: close read end, write data, close write end
    
    // TODO: In child: close write end, read data, close read end
}

void bidirectional_pipe_demo() {
    // TODO: Create two pipes for bidirectional communication
    // pipe1: parent -> child
    // pipe2: child -> parent
    
    int pipe1[2], pipe2[2];
    
    // TODO: Create both pipes
    
    // TODO: Fork process
    
    // TODO: Parent sends data to child and receives response
    
    // TODO: Child receives data and sends response
}

int main() {
    printf("=== Parent to Child Demo ===\n");
    parent_to_child_demo();
    
    printf("\n=== Bidirectional Communication Demo ===\n");
    bidirectional_pipe_demo();
    
    return 0;
}
