#include <stdio.h>

enum Field {
    NAME,
    ROLL_NO,
    MARKS
};

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student data
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print using enum only
    printf("\n--- Student Details ---\n");

    enum Field f;
    for (f = NAME; f <= MARKS; f++) {
        switch(f) {
            case NAME:
                printf("Name: %s\n", s.name);
                break;
            case ROLL_NO:
                printf("Roll Number: %d\n", s.roll_no);
                break;
            case MARKS:
                printf("Marks: %.2f\n", s.marks);
                break;
        }
    }

    return 0;
}
