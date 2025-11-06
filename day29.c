// Q57-Find the sum of array elements.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[100];
    int sum = 0;
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}



// Q58-Find the maximum and minimum element in an array.

#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int max, min;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter the elements of your array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (int i=1; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
        else if (arr[i]< min){
            min = arr[i];
        }
    }

    printf("Maximum = %d ", max);
    printf("Minimum = %d ", min);

    return 0;
}