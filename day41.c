// Q81-Count characters in a string without using built-in length functions.

#include <stdio.h>
int main(){
    int i=0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        i++;
    }

    printf("Total character= %d", i);
    return 0;
}


// Q82-Print each character of a string on a new line.

#include <stdio.h>
int main(){
    char i;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }

    return 0;

}