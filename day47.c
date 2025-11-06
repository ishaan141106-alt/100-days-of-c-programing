// Q93-Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str1[100];
    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);

    char str2[100];
    printf("Enter the string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1,"\n")] = 0;
    str2[strcspn(str2, "\n")]=0;

    for(int i=0; str1[i]; i++)
    str1[i] = tolower(str1[i]);

    for(int i=0; str2[i]; i++)
    str2[i] = tolower(str2[i]);

    int n1= strlen(str1);
    int n2= strlen(str2);

    if(n1 != n2){
        printf("Not anagrams.");
        return 0;
    }

    int freq[26] = {0};

    for(int i=0; i<n1; i++){
        if(isalpha(str1[i])){
            freq[str1[i]-'a']++;
        }
    }

    for(int i=0; i<n2; i++){
        if(isalpha(str2[i])){
            int idx = str2[i]-'a';
            if(freq[idx] == 0){
                printf("Not Anagram.");
                return 0;
            }
            freq[idx]--;
        }
    }

    printf("The strings are anagrams.");
    return 0;


}



// Q94-Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")]=0;

    int i=0;
    int maxlen=0, currlen = 0;
    int maxstart=0, currstart =0;

    while(str[i] != '\0'){
        if(!isspace(str[i])){

            if(currlen ==0){
                currstart = i;
            }
            currlen++;
        }
        else{
            if(currlen>maxlen){
                maxlen = currlen;
                maxstart = currstart;
            }
            currlen= 0;
        }
        i++;
    }


    if(currlen> maxlen){
        maxlen=currlen;
        maxstart = currstart;
    }

    printf("Longest word: ");
    for(int j=maxstart; j<maxstart+maxlen; j++){
        putchar(str[j]);
    }

    printf("\nLength: %d\n", maxlen);

    return 0;
}