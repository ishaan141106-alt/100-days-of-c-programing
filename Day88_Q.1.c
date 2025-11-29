//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Array of enum names in the same order
    char *ALAHUAKHBAR[] = { "ADMIN", "USER", "GUEST" };

    printf("Enum names and values:\n");

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", ALAHUAKHBAR[r - 1], r);
    }

    return 0;
}

