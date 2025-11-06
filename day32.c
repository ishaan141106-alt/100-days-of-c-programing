// Q63-Merge two arrays.

#include <stdio.h>
void merge(int *arr1, int n, int *arr2, int m){
    int t= m+n;
    int copyarr[t];
    for(int i=0; i<n; i++){
        copyarr[i] = arr1[i];
    }

    for(int i=0; i<m; i++){
        copyarr[n+ i]= arr2[i];
    }


    for(int i=0; i<t; i++){
        printf("%d ", copyarr[i]);
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);
    int arr2[m];
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    merge(arr1, n, arr2, m);
    return 0;
}





// Q64-Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main(){
    long long num;
    int digitcount[10] = {0};

    printf("Enter the integer number: ");
    scanf("%lld", &num);

    if(num<0){
        num = -num;
    }

    while(num>0){
        int digit = num%10;
        digitcount[digit]++;
        num/=10;
    }

    int maxdigit = 0;
    for(int i=0; i<10; i++){
        if(digitcount[i]> digitcount[maxdigit]){
            maxdigit = i;
        }
    }

    printf("Digit that occur max is %d", maxdigit);

    return 0;
}