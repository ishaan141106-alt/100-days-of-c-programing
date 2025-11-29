//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result
// to output.txt.
#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");

    if(inputFile == NULL)
    {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");

    // Process characters
    while((ch = fgetc(inputFile)) != EOF)
    {
        // Check if lowercase letter
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;   // converting  to uppercase 
        }

        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Converted successfully! Check output.txt\n");

    return 0;
}
