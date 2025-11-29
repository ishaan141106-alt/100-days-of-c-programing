//Ask the user for a filename. Check if it exists by trying to open it in read mode. 
//If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include<stdio.h> 
int main()
{ FILE *ptr;
  char name[100];
  char ch;
  printf("Enter the filename ");
  scanf("%s",name);

  ptr=fopen(name,"r");
  if(ptr == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
    }
    else
    {
        printf("\n--- File Content ---\n\n");

        // Reading and printing file content character by character
        while((ch = fgetc(ptr)) != EOF)
        {
            putchar(ch);
        }
        
        fclose(ptr);
    }

    return 0;
}



