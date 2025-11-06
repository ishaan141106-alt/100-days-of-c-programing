// Q61-Search for an element in an array using linear search.

#include <stdio.h>

int linearsearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);

    printf("%d", linearsearch(arr, n,5));
    return 0;
}



// Q62-Reverse an array without taking extra space.

#include <stdio.h>

int revarr(int *arr, int n){
    int st=0;
    int end=n-1;
    int temp;
    while(st<end){
        temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    
    revarr(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i] );
    }
    
    return 0;
}