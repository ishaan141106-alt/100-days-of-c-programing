// Q95-Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    printf("Enter your string: ");
    scanf("%s", str1);

    char str2[100];
    printf("Enter the rotated string: ");
    scanf("%s", str2);

    int n1= strlen(str1);
    int n2 = strlen(str2);

    if(n1!=n2){
        printf("NO Rotation.");
        return 0;
    }



    char concat[200];
    strcpy(concat,str1);
    strcat(concat, str1);

    if(strstr(concat, str2) != NULL){
        printf("Yes, it is a rotation.");
    }
    else{
        printf("Not a rotation.");
    }

    return 0;
}




// Q96-Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include<ctype.h>

void rev(char *str, int start, int end){
    char temp;
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void revword(char *str){
    int start=0, end=0;
    int len = strlen(str);

    while(end <= len){
        if(str[end] == ' ' || str[end] == '\0'){
            rev(str, start, end-1);
            start = end +1;
        }
        end++;
    }
}
int main(){
    char str[100];
    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")]= '\0';

    revword(str);

    printf("%s", str);

    return 0;

}