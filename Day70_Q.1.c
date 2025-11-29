//Write a program to take a string input. Change it to sentence case.
#include<stdio.h> 
int main()
 {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Step 1: Makeing  the first character uppercase 
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;  // to  uppercase
    }

    // Step 2: Converting  rest of the characters to lowercase
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  //  lowercase
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}

