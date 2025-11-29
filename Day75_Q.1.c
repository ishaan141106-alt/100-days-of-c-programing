//Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.
#include<stdio.h> 
int main()
{ FILE *file;
    char filename[200],text[100];

    printf("Enter file name ");
    scanf("%s",filename);

    file=fopen(filename ,"a");

    if(file==NULL)
    {printf("Error Unable to open file ");
        return 1; //sasta return 
    }
    getchar();//faltu use 

    printf("Enter the text to append ");
    fgets(text,sizeof(text),stdin);

    fputs(text,file);

    fclose(file);
    printf("Text append success fully ");

    return 0 ; 


}
