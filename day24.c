// Q47-Write a program to print the following pattern: * ** *** **** *****

#include <stdio.h>
int main(){
    int n= 5;

    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf(" ");
    }
    return 0;
}


// Q48-Write a program to print the following pattern: 1 12 123 1234 12345

#include <stdio.h>
int main(){
    int n=5;

    for(int i=0; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf(" ");
    }
    return 0;
}