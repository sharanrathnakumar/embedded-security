#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
Node* create_node(int data);
void insert_at_head(Node** head, int data);
void insert_at_tail(Node** head, int data);
void delete_node(Node** head, int data);
Node* reverse_list(Node* head);
bool detect_cycle(Node* head);
Node* find_middle(Node* head);
void print_list(Node* head);
void free_list(Node** head);

// TODO: Implement all functions below

Node* create_node(int data) {
    // TODO: Allocate and initialize a new node
    return NULL;
}

void insert_at_head(Node** head, int data) {
    // TODO: Insert node at the beginning
}

void insert_at_tail(Node** head, int data) {
    // TODO: Insert node at the end
}

void delete_node(Node** head, int data) {
    // TODO: Delete first occurrence of data
}

Node* reverse_list(Node* head) {
    // TODO: Reverse the linked list (iterative approach)
    return NULL;
}

bool detect_cycle(Node* head) {
    // TODO: Use Floyd's cycle detection (tortoise and hare)
    return false;
}

Node* find_middle(Node* head) {
    // TODO: Find middle element using slow/fast pointers
    return NULL;
}

void print_list(Node* head) {
    // TODO: Print all elements
}

void free_list(Node** head) {
    // TODO: Free all nodes and set head to NULL
}

int main() {
    Node* head = NULL;
    
    // TODO: Test your implementations here
    
    return 0;
}
