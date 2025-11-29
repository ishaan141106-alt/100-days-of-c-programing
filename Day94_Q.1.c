//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define structure 
struct Student {                       
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure as parameter
void display(struct Student s) {
    printf("\n--- Student Details ---\n");            
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);             
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Taking input
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Passing structure to function 
    display(st);

    return 0;
}

