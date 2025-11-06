
// Q67-Insert an element in an array at a given position.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int num, index;
    printf("Enter the element you want to insert and where: ");
    scanf("%d %d", &num, &index);

    if(index<0 || index>n){
        printf("Invalid position");
        return -1;
    }

    for(int i=n; i>index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = num;
    n++;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}


// Q68-Delete an element from an array.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter index of the number to delete: ");
    scanf("%d", &num);

    for(int i=num; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    n--;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}