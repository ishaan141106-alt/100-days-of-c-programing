//Use malloc() to allocate structure memory dynamically and print details.
// malloc is used to give extra memory unfortunately we have not studied it due to 3 months semester end 
#include <stdio.h>
#include <stdlib.h>   // essential to use malloc we need to take stlib library 

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;   //  making a structure pointer

    // allocate memory dynamically for 1 student
    s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    // input student details
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Roll  : %d\n", s->roll);
    printf("Marks : %.2f\n", s->marks);

    // free allocated memory
    free(s);

    return 0;
}
// yha sab  hard hai mere bhai padhai karo padhai 