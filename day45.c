// Q89-Count frequency of a given character in a string.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character: ");
    getchar();
    scanf("%c", &ch);

    int count =0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]== ch){
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;

}



// Q90-Toggle case of each character in a string.

#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    int i=0;
    while(str[i]!='\0'){
        if(islower(str[i])){
            str[i]= toupper(str[i]);
            }
            else if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        i++;
    }

    printf("%s", str);
    return 0;
}
