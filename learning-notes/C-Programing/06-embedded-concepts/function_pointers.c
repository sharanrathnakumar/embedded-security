#include <stdio.h>
#include <stdint.h>

// State machine states
typedef enum {
    STATE_IDLE,
    STATE_ACTIVE,
    STATE_PROCESSING,
    STATE_COMPLETE,
    STATE_ERROR
} State;

// Event types
typedef enum {
    EVENT_START,
    EVENT_DATA_READY,
    EVENT_COMPLETE,
    EVENT_ERROR,
    EVENT_RESET
} Event;

// Function pointer for state handler
typedef State (*StateHandler)(Event event);

// Function prototypes
State handle_idle(Event event);
State handle_active(Event event);
State handle_processing(Event event);
State handle_complete(Event event);
State handle_error(Event event);
void execute_callback(void (*callback)(int), int value);

// TODO: Implement all functions below

State handle_idle(Event event) {
    // TODO: Handle events in IDLE state
    printf("IDLE state received event %d\n", event);
    return STATE_IDLE;
}

State handle_active(Event event) {
    // TODO: Handle events in ACTIVE state
    return STATE_ACTIVE;
}

State handle_processing(Event event) {
    // TODO: Handle events in PROCESSING state
    return STATE_PROCESSING;
}

State handle_complete(Event event) {
    // TODO: Handle events in COMPLETE state
    return STATE_COMPLETE;
}

State handle_error(Event event) {
    // TODO: Handle events in ERROR state
    return STATE_ERROR;
}

void execute_callback(void (*callback)(int), int value) {
    // TODO: Execute the provided callback function
    if (callback != NULL) {
        // Call the function pointer
    }
}

// Example callback functions
void on_data_received(int data) {
    printf("Data received: %d\n", data);
}

void on_error_occurred(int error_code) {
    printf("Error occurred: %d\n", error_code);
}

int main() {
    // State machine lookup table
    StateHandler state_table[] = {
        [STATE_IDLE] = handle_idle,
        [STATE_ACTIVE] = handle_active,
        [STATE_PROCESSING] = handle_processing,
        [STATE_COMPLETE] = handle_complete,
        [STATE_ERROR] = handle_error
    };
    
    // TODO: Implement state machine execution
    State current_state = STATE_IDLE;
    
    // TODO: Test callback mechanism
    execute_callback(on_data_received, 42);
    
    return 0;
}
