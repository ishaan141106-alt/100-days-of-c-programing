
// Q69-Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n<2){
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = INT_MIN;

    for(int i=0; i<n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]> second && arr[i] != first){
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    printf("There is no second largest number.");

    else 
    printf("The second largest element is %d", second);

    return 0;


}



// Q70-Rotate an array to the right by k positions.

#include <stdio.h>

void reverse(int *arr, int start , int end){
    int temp=0;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        }
}

void rotateright(int *arr, int n, int k){
    k = k % n;

    reverse(arr, 0 , n-1);

    reverse (arr, 0 , k-1);

    reverse(arr, k, n-1);
}

void printarr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){
       int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array :");
    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the postion of rotation: ");
    scanf("%d", &k);

    rotateright(arr, n, k);
    printarr(arr, n);
    
    return 0;
}