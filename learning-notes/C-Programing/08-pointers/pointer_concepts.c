/*
 * Comprehensive Pointer Concepts in C
 * Covers: Basic pointers, pointer arithmetic, arrays, double pointers,
 *         memory manipulation, function pointers, and more
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// ============================================================================
// 1. CUSTOM MEMORY MANIPULATION FUNCTIONS
// ============================================================================

/**
 * Custom implementation of memcpy
 * Copies n bytes from source to destination (no overlap handling)
 * TODO: Implement this function
 */
void* my_memcpy(void* dest, const void* src, size_t n) {
    // TODO: Your implementation here
    return dest;
}

/**
 * Custom implementation of memmove
 * Safely copies n bytes even when source and destination overlap
 * TODO: Implement this function with overlap handling
 */
void* my_memmove(void* dest, const void* src, size_t n) {
    // TODO: Your implementation here
    // Hint: Handle forward and backward copying based on overlap
    return dest;
}

/**
 * Custom implementation of memset
 * Fills n bytes of memory with the specified value
 */
void* my_memset(void* ptr, int value, size_t n) {
    unsigned char* p = (unsigned char*)ptr;
    
    for (size_t i = 0; i < n; i++) {
        p[i] = (unsigned char)value;
    }
    
    return ptr;
}

/**
 * TODO: Implement this function
 */
vo TODO: Implement this function
 */
int my_memcmp(const void* ptr1, const void* ptr2, size_t n) {
    // TODO: Your implementation here===========================================================================
// 2. POINTER ARITHMETIC AND ARRAY OPERATIONS
// ============================================================================

void demonstrate_pointer_arithmetic(void) {
    printf("\n=== Pointer Arithmetic ===\n");
    
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d, Address: %p\n", i, *(ptr + i), (void*)(ptr + i));
    // TODO: Implement pointer arithmetic demonstrations
    // - Array traversal using pointer arithmetic
    // - Pointer increment/decrement
    // - Pointer difference
    // - Different data types (char, int, etc.) {
    *ptr = new_value;
}

void demonstrate_double_pointers(void) {
    printf("\n=== Double Pointers ===\n");
    
    int x = 100;
    int y = 200;
    int* ptr = &x;
    int** pptr = &ptr;
    
    printf("Value of x: %d\n", x);
    printf("*ptr = %d (points to x)\n", *ptr);
    printf("**pptr = %d (points to ptr which points to x)\n", **pptr);
    
    // Modify pointer using double pointer
    *pptr = &y;
    printf("\nAfter *pptr = &y:\n");
    printf("*ptr = %d (now points to y)\n", *ptr);
    
    // 2D array using double pointers
    printf("\n2D Array with double pointers:\n");
    int rows = 3, cols = 3;
    int** matrix = (int**)malloc(rows * sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    // TODO: Implement pointer modification through double pointer
}

void demonstrate_double_pointers(void) {
    printf("\n=== Double Pointers ===\n");
    // TODO: Implement double pointer demonstrations
    // - Basic pointer to pointer
    // - Modifying pointers using double pointers
    // - 2D array allocation using double pointers
    // - Remember to free allocated memory
    // Function pointer as callback
    printf("\nUsing function pointer as callback:\n");
    operation_t op = multiply;
    printf("Result of callback: %d\n", op(7, 8));
}

// ============================================================================
// 5. VOID POINTERS
// ============================================================================

void print_bytes(void* ptr, size_t size) {
    unsigned char* byte_ptr = (unsigned char*)ptr;
    printf("Bytes: ");
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", byte_ptr[i]);
    }
    printf("\n");
}

void demonstrate_void_pointers(void) {
    printf("\n=== Void Pointers ===\n");
    
    int num = 0x12345678;
    // TODO: Implement function pointer demonstrations
    // - Create array of function pointers
    // - Call functions through pointers
    // - Use function pointers as callbacks
    print_bytes(vptr, sizeof(char));
}

// ============================================================================
// 6. CONST POINTERS AND POINTER TO CONST
// ============================================================================

void demonstrate_const_pointers(void) {
    printf("\n=== Const Pointers ===\n");
    
    int x = 10, y = 20;
    
    // Pointer to const int (cannot modify value through pointer)
    const int* ptr1 = &x;
    printf("Pointer to const int: *ptr1 = %d\n", *ptr1);
    // *ptr1 = 15; // ERROR: cannot modify
    ptr1 = &y;  // OK: can change pointer itself
    printf("After reassignment: *ptr1 = %d\n", *ptr1);
    
    // TODO: Implement byte-by-byte printing
    // Hint: Cast to unsigned char* and print in hex
}// TODO: Implement const pointer demonstrations
    // - Pointer to const data: const int* ptr
    // - Const pointer to data: int* const ptr
    // - Const pointer to const data: const int* const ptr
    // - Show what operations are allowed/forbidden for each
    for (int i = 0; i < 3; i++) {
        employees[i].id = 100 + i;
        snprintf(employees[i].name, 50, "Employee%d", i + 1);
        employees[i].salary = 50000.0f + (i * 5000.0f);
    }
    
    printf("\nArray of employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %s - $%.2f\n", 
               (employees + i)->id, 
               (employees + i)->name, 
               (employees + i)->salary);
    }
    
    free(employees);
}

// ============================================================================
// 8. MEMORY MANIPULATION DEMONSTRATIONS
// =// TODO: Implement structure pointer demonstrations
    // - Access structure members using -> operator
    // - Modify structure through pointer
    // - Dynamically allocate array of structures
    // - Don't forget to free memoryorld";
    
    printf("Compare '%s' and '%s': %d\n", str1, str2, my_memcmp(str1, str2, 5));
    printf("Compare '%s' and '%s': %d\n", str1, str3, my_memcmp(str1, str3, 5));
}

// ============================================================================
// 9. POINTER TO ARRAY AND ARRAY OF POINTERS
// ============================================================================

void demonstrate_array_pointers(void) {
    printf("\n=== Pointer to Array vs Array of Pointers ===\n");
    
    // Pointer to array
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr_to_array)[5] = &arr;
    
    // TODO: Test your memory functions
    // - Test my_memcpy with strings and arrays
    // - Test my_memmove with overlapping memory regions
    // - Test my_memset to initialize memory
    // - Test my_memcmp to compare memory blocks

int* create_array(int size) {
    if (size <= 0) {
        return NULL;  // Error handling
    }
    
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    
    return arr;
}// TODO: Implement array pointer demonstrations
    // - Pointer to entire array: int (*ptr)[5]
    // - Array of pointers: int* arr[3]
    // - String arrays using array of pointers
    // - Show the syntax differencesrintf("\nAlways initialize pointers:\n");
    int* safe_ptr = NULL;  // Good practice
    printf("Initialized pointer to NULL\n");
}

// ============================================================================
// 11. ADVANCED: POINTER CASTING AND TYPE PUNNING
// ============================================================================

void demonstrate_pointer_casting(void) {
    printf("\n=== Pointer Casting and Type Punning ===\n");
    
    // Interpreting data differently
    int num = 0x41424344;  // "ABCD" in ASCII
    char* char_ptr = (char*)&num;
    
    printf("Integer value: 0x%08X\n", num);
    printf("As characters: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", char_ptr[i]);
    }
    printf("\n");
    
    // Float to int bit representation
    float pi = 3.14159f;
    uint32_t* int_repr = (uint32_t*)&pi;
    printf("\nFloat value: %.5f\n", pi);
    printf("Bit representation: 0x%08X\n", *int_repr);
    
    // Demonstrating alignment
    printf("\nAlignment considerations:\n");
    struct Packed {
        char c;
        int i;
    // TODO: Implement safe array creation
    // - Check for valid size
    // - Allocate memory using malloc
    // - Check if allocation succeeded
    // - Initialize array elements
    // - Return pointer or NULL on failure
    return NULL;
}

void demonstrate_pointer_safety(void) {
    printf("\n=== Pointer Safety and NULL Handling ===\n");
    // TODO: Implement pointer safety demonstrations
    // - Always check for NULL before dereferencing
    // - Set pointers to NULL after free
    // - Avoid wild (uninitialized) pointers
    // - Demonstrate proper error handling
    my_strcat(dest, " Programming");
    printf("After my_strcat: %s\n", dest);
    
    // String tokenization using pointers
    printf("\nString tokenization:\n");
    char text[] = "one,two,three,four";
    char* ptr = text;
    char* token_start = ptr;
    
    while (*ptr != '\0') {
        if (*ptr == ',') {
            *ptr = '\0';
            printf("Token: %s\n", token_start);
    // TODO: Implement pointer casting demonstrations
    // - Cast int pointer to char pointer to view bytes
    // - Type punning: view float as int (bit representation)
    // - Show memory layout of packed structures
    // - Demonstrate alignment considerations======\n");
    
    return 0;
}
// TODO: Implement strlen using pointers
    // Hint: Use pointer arithmetic to find string length
    return 0;
}

char* my_strcpy(char* dest, const char* src) {
    // TODO: Implement strcpy using pointers
    // Hint: Copy characters until null terminator
    return dest;
}

char* my_strcat(char* dest, const char* src) {
    // TODO: Implement strcat using pointers
    // Hint: Find end of dest, then copy src
    return dest;
}

void demonstrate_string_pointers(void) {
    printf("\n=== Pointer-Based String Operations ===\n");
    // TODO: Implement string pointer demonstrations
    // - Test my_strlen, my_strcpy, my_strcat
    // - Implement string tokenization using pointers
    // - Demonstrate pointer-based string traversal