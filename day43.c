// Q85-Reverse a string.

#include <stdio.h>
#include <string.h>


void rev(char str[], int n){
    for(int i=0; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    printf("Reversed string: %s", str);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n= strlen(str);

    rev(str,n);
    return 0;
}


// Q86-Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

void rev(char str[], int n){
    for(int i=0; i<n/2; i++){
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main(){
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    int n= strlen(str);

    char orig[100];
    strcpy(orig,str);

    rev(str, n);

    if(strcmp(str, orig) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome")
    }

    return 0;

}