//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

// structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;        
    struct Student *ptr;     

    ptr = &s;   

    printf("Enter student name: ");   // -> sign is used to access sturcture members through a pointer 
    scanf("%s", ptr->name);

    printf("Enter roll number: ");                   // after all its the end of 1st semester and my first language i tried hard 
    scanf("%d", &ptr->roll);             //learn a lot of new things enjoyed everything i will keep grinding and growing 
                                        // done 90% of code myself i took a lot of time and in the last 
    printf("Enter marks: ");            //"DAmN I TRIED HARD" and i will keep trying ..
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
