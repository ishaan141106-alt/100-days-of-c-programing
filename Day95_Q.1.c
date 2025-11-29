//Return a structure containing top student's details from a function.
// stucture for students 
#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to find and return the student with highest marks
struct Student findTopStudent(struct Student s[], int n) {
    int i;
    int topIndex = 0;   // Assume first student is topper

    // Compare marks of all students
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;   // Update index of topper
        }
    }

    return s[topIndex];   // Return the structure of topper
}

int main() {

    struct Student st[5];   // Array of 5 students
    int i;

    // Input students' details
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", st[i].name);

        printf("Enter roll number: ");
        scanf("%d", &st[i].roll);

        printf("Enter marks: ");
        scanf("%f", &st[i].marks);
    }

    // Call the function and store returned structure
    struct Student topper = findTopStudent(st, 5);

    // Print topper's details
    printf("\n===== Top Student Details =====\n");
    printf("Name  : %s\n", topper.name);
    printf("Roll  : %d\n", topper.roll);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}
