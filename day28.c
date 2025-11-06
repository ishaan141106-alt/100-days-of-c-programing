// Q55-Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<2){
        printf("No prime number less than 2.");
    }

    for(int i=2; i<=n; i++){
        int isprime = 1;
        for(int j=2; j*j <= i; j++){
            if(i%j != 0){
                isprime = 1;
            }
            else{
                isprime =0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d ", i);
        }
        
    }
    return 0;
}



// Q56-Read and print elements of a one-dimensional array.

// Show Sample Test Cases
// Input 1:
// 3
// 10 20 30

#include <stdio.h>

void printarr(int *arr, int n ){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 }
int main(){
    int  n;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);

    int arr[100];                               //input elements of array
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printarr(arr, n);

    return 0;
}