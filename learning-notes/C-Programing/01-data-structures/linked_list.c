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
    
    printf("=== Linked List Implementation Test Cases ===\n\n");
    
    // Question 1: Create and insert nodes at head
    printf("Q1: Insert elements 5, 10, 15 at head\n");
    // insert_at_head(&head, 5);
    // insert_at_head(&head, 10);
    // insert_at_head(&head, 15);
    // Expected: 15 -> 10 -> 5
    // print_list(head);
    printf("---\n\n");
    
    // Question 2: Insert nodes at tail
    printf("Q2: Insert elements 20, 25, 30 at tail\n");
    // insert_at_tail(&head, 20);
    // insert_at_tail(&head, 25);
    // insert_at_tail(&head, 30);
    // Expected: 15 -> 10 -> 5 -> 20 -> 25 -> 30
    // print_list(head);
    printf("---\n\n");
    
    // Question 3: Print the current list
    printf("Q3: Print current linked list\n");
    // print_list(head);
    printf("---\n\n");
    
    // Question 4: Find the middle element
    printf("Q4: Find and print the middle element\n");
    // Node* middle = find_middle(head);
    // if (middle) {
    //     printf("Middle element: %d\n", middle->data);
    // }
    printf("---\n\n");
    
    // Question 5: Delete a node (delete 10)
    printf("Q5: Delete node with value 10\n");
    // delete_node(&head, 10);
    // Expected: 15 -> 5 -> 20 -> 25 -> 30
    // print_list(head);
    printf("---\n\n");
    
    // Question 6: Delete head node (delete 15)
    printf("Q6: Delete head node (value 15)\n");
    // delete_node(&head, 15);
    // Expected: 5 -> 20 -> 25 -> 30
    // print_list(head);
    printf("---\n\n");
    
    // Question 7: Delete tail node (delete 30)
    printf("Q7: Delete tail node (value 30)\n");
    // delete_node(&head, 30);
    // Expected: 5 -> 20 -> 25
    // print_list(head);
    printf("---\n\n");
    
    // Question 8: Try to delete non-existent node
    printf("Q8: Try to delete non-existent node (value 100)\n");
    // delete_node(&head, 100);
    // Expected: 5 -> 20 -> 25 (no change)
    // print_list(head);
    printf("---\n\n");
    
    // Question 9: Reverse the linked list
    printf("Q9: Reverse the linked list\n");
    // head = reverse_list(head);
    // Expected: 25 -> 20 -> 5
    // print_list(head);
    printf("---\n\n");
    
    // Question 10: Find middle after reversal
    printf("Q10: Find middle element after reversal\n");
    // middle = find_middle(head);
    // if (middle) {
    //     printf("Middle element: %d\n", middle->data);
    // }
    printf("---\n\n");
    
    // Question 11: Test with empty list
    printf("Q11: Free the list and test operations on empty list\n");
    // free_list(&head);
    // print_list(head);  // Should handle empty list gracefully
    // middle = find_middle(head);  // Should return NULL
    // if (middle == NULL) {
    //     printf("Middle is NULL (correct for empty list)\n");
    // }
    printf("---\n\n");
    
    // Question 12: Test cycle detection - create list without cycle
    printf("Q12: Create new list and test cycle detection (no cycle)\n");
    // insert_at_tail(&head, 1);
    // insert_at_tail(&head, 2);
    // insert_at_tail(&head, 3);
    // insert_at_tail(&head, 4);
    // print_list(head);
    // bool has_cycle = detect_cycle(head);
    // printf("Cycle detected: %s\n", has_cycle ? "Yes" : "No");
    printf("---\n\n");
    
    // Question 13: Test cycle detection - create list with cycle
    printf("Q13: Create a cycle and test detection\n");
    // Manual cycle creation for testing:
    // Node* temp = head;
    // while (temp->next != NULL) {
    //     temp = temp->next;
    // }
    // temp->next = head->next;  // Create cycle: last node points to 2nd node
    // has_cycle = detect_cycle(head);
    // printf("Cycle detected: %s\n", has_cycle ? "Yes" : "No");
    // // Break the cycle before freeing
    // temp->next = NULL;
    printf("---\n\n");
    
    // Question 14: Test with single node
    printf("Q14: Test operations with single node list\n");
    // free_list(&head);
    // insert_at_head(&head, 42);
    // print_list(head);
    // middle = find_middle(head);
    // if (middle) {
    //     printf("Middle element: %d\n", middle->data);
    // }
    // head = reverse_list(head);
    // printf("After reversal: ");
    // print_list(head);
    printf("---\n\n");
    
    // Question 15: Test with two nodes
    printf("Q15: Test operations with two node list\n");
    // insert_at_tail(&head, 99);
    // print_list(head);
    // middle = find_middle(head);
    // if (middle) {
    //     printf("Middle element: %d\n", middle->data);
    // }
    printf("---\n\n");
    
    // Question 16: Large list test
    printf("Q16: Create and manipulate a larger list (10 elements)\n");
    // free_list(&head);
    // for (int i = 1; i <= 10; i++) {
    //     insert_at_tail(&head, i);
    // }
    // print_list(head);
    // middle = find_middle(head);
    // if (middle) {
    //     printf("Middle element: %d\n", middle->data);
    // }
    // head = reverse_list(head);
    // printf("After reversal: ");
    // print_list(head);
    printf("---\n\n");
    
    // Question 17: Multiple delete operations
    printf("Q17: Delete multiple elements in sequence\n");
    // delete_node(&head, 10);
    // delete_node(&head, 5);
    // delete_node(&head, 1);
    // print_list(head);
    printf("---\n\n");
    
    // Question 18: Insert at specific positions (bonus challenge)
    printf("Q18: Bonus - Can you implement insert_at_position(Node** head, int data, int pos)?\n");
    // insert_at_position(&head, 100, 0);  // Insert at beginning
    // insert_at_position(&head, 200, 2);  // Insert at position 2
    // insert_at_position(&head, 300, 5);  // Insert at position 5
    // print_list(head);
    printf("---\n\n");
    
    // Question 19: Get nth node (bonus challenge)
    printf("Q19: Bonus - Can you implement get_nth_node(Node* head, int n)?\n");
    // Node* nth = get_nth_node(head, 3);
    // if (nth) {
    //     printf("Node at position 3: %d\n", nth->data);
    // }
    printf("---\n\n");
    
    // Question 20: Find length (bonus challenge)
    printf("Q20: Bonus - Can you implement get_length(Node* head)?\n");
    // int length = get_length(head);
    // printf("List length: %d\n", length);
    printf("---\n\n");
    
    // Final cleanup
    printf("Cleaning up memory...\n");
    // free_list(&head);
    printf("Done!\n");
    
    return 0;
}
