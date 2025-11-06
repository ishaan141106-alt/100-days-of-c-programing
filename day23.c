// Q45-Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    float sum = 0;
    float numerator = 1;
    for (int i=1; i<=n; i++){
        numerator = 2*i;
        sum += numerator/(4*i - 1);

    }

    printf("%f", sum);
    return 0;
}


//Q46-Write a program to print the following pattern: ***** ***** ***** ***** *****

#include <stdio.h>
int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("*");
        }
        printf(" ");
    }
    return 0;
}