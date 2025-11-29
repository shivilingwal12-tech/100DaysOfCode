// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

void display_role_message(enum Role role) {
    if (role == ADMIN) {
        printf("ADMIN: Full access granted.\n");
    } else if (role == USER) {
        printf("USER: Standard access granted.\n");
    } else if (role == GUEST) {
        printf("GUEST: Read-only access granted.\n");
    } else {
        printf("Unknown role.\n");
    }
}

int main() {
    enum Role current_role;
    
    current_role = ADMIN;
    printf("Role: ADMIN (Value %d)\n", current_role);
    display_role_message(current_role);

    current_role = USER;
    printf("Role: USER (Value %d)\n", current_role);
    display_role_message(current_role);

    current_role = GUEST;
    printf("Role: GUEST (Value %d)\n", current_role);
    display_role_message(current_role);
    
    return 0;
}