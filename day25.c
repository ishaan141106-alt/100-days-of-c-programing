// Q49-Write a program to print the following pattern: 5 45 345 2345 12345

#include <stdio.h>
int main(){
    int n=5;
    for(int i=n; i>=1; i--){
        for(int j=i; j<=n; j++){
            printf("%d",j);
        }
    
        printf("\n");   
    }
    return 0;
}



// Q50-Write a program to print the following pattern: ***** **** *** ** *

#include<stdio.h>
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }

        for(int j=0; j<n-i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}