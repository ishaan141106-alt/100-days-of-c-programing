// Q43-Write a program to check if a number is a strong number.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalnum = num;
    int digit;
    int sum=0;
    
    while(num>0){
        digit = num%10;
        int fact =1;
        for(int j=1; j<=digit; j++){
            fact *= j;
        }
        sum += fact;
        num /= 10;
    }
    
    if( originalnum == sum)
    printf("It is a strong number.");

    else
    printf("It is not a strong number.");

    return 0;
    
}


// Q44-Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main(){
    int n;
    printf("Enter value of num: ");
    scanf("%d", &n);

    float sum = 0.0;
    int numerator = 1;

    for (int i=1; i<=n; i++){
        float term = (float)numerator/ ((numerator == 1)? 1 :(numerator +1));
        sum += term;
        numerator += 2;
    }
    printf("Sum = %f", sum);
   
    
    return 0;

}