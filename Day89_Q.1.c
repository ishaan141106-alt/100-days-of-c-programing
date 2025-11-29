//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 786,
    FAILURE = 10,
    TIMEOUT = 15
};

int main() {

    printf("Enum values stored in memory:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}

