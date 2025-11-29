// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void print_message(enum Status status) {
    if (status == SUCCESS) {
        printf("Operation successful.\n");
    } else if (status == FAILURE) {
        printf("Operation failed.\n");
    } else if (status == TIMEOUT) {
        printf("Operation timed out.\n");
    } else {
        printf("Unknown status.\n");
    }
}

int main() {
    enum Status current_status;
    
    current_status = SUCCESS;
    printf("Status %d: ", current_status);
    print_message(current_status);

    current_status = FAILURE;
    printf("Status %d: ", current_status);
    print_message(current_status);

    current_status = TIMEOUT;
    printf("Status %d: ", current_status);
    print_message(current_status);
    
    return 0;
}