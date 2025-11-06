// Q41 Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalnum = num;

    int lastdigit = num % 10;

    int digits = (int)log10(num);

    int firstdigit = num /(int)pow(10, digits);

    num = num%(int)pow(10,digits);

    num = num/10;

    int swapnum = lastdigit * (int)pow(10,digits) + num * 10 + firstdigit;


    printf("Swapped number = %d", swapnum);

    return 0;

}



// Q42 Write a program to check if a number is a perfect number.

#include <stdio.h>
int main(){
    int num, div, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    for (int i=1; i<num; i++){
        div = num%i;
        if (div == 0)
        sum +=i;

        else
        continue;
    }

    if (sum == num)
    printf("It is a perfect number.");

    else
    printf("It is not a perfect number.");

    return 0;
}
