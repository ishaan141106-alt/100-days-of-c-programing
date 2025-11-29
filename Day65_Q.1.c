//Write a program to take two strings s and t as inputs (assume all characters are lowercase).
 //The task is to determine if s and t are valid anagrams, 
 //meaning they contain the same characters with the same frequencies. 
 //Print "Anagram" if they are, otherwise "Not Anagram".
#include<stdio.h> 
#include<string.h> 
int main()
{ char s[100], t[100];
    int freq[26]={0};
    printf("Enter first string ");
    scanf("%s",&s); // just use array name 

    printf("Enter ssecond string ");
    scanf("%s",&t);

    if(strlen(s)!=strlen(t)){
        printf("Strings are not anagram ");
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;  // increasing  count
    }

    // Reducing count 
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;  // decreasing  count
    }

    // final checkk if frequency are not zero 
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
    

