#include <stdio.h>

// Structure for employee details
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {

    struct Employee e1, e2;
    FILE *fp;

    // -------- Taking employee details from user --------
    printf("Enter employee name: ");
    scanf("%s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);

    // -------- Writing to binary file --------
    fp = fopen("employee.dat", "wb");  // wb = write binary
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }

    fwrite(&e1, sizeof(e1), 1, fp);   // Write structure into file
    fclose(fp);
    printf("\nData stored successfully in binary file!\n");

    fp = fopen("employee.dat", "rb"); // rb = read binary
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }

    fread(&e2, sizeof(e2), 1, fp);   // Reading 
    fclose(fp);

    //  Displaying the daata 
    printf("\n----- Employee Details From File -----\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}
