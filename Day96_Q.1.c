//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

// Structure to store employee details
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {

    struct Employee e1, e2;  // e1 = write to file, e2 = read from file
    FILE *fp;

    printf("Enter employee name: ");
    scanf("%s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);

    // -------- Writing data to binary file --------
    fp = fopen("employee.dat", "wb");  // wb = write binary
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }

    fwrite(&e1, sizeof(e1), 1, fp);  // writing structure to file
    fclose(fp);

    printf("\nData stored in binary file successfully!\n");

    // -------- Reading data from binary file --------
    fp = fopen("employee.dat", "rb");  // rb = read binary
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }

    fread(&e2, sizeof(e2), 1, fp);  // reading structure from file
    fclose(fp);

    // -------- Displaying read data --------
    printf("\n--- Employee Details From File ---\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}
