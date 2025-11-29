//Read a text file and count the total number of characters, words, and lines. 
//A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include<stdio.h> 
int main()
{FILE *fp;
 char ch; //can only store one character 
 int words=0, characters=0, lines=0;
 int inWord = 0;  // flag to track 

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check if character is part of a word
        if (ch == ' ' || ch == '\n' || ch == '\t') { //\t is used to give big space 
            inWord = 0; // end of word
        } else if (inWord == 0) { 
            // Start of a new word
            words++;
            inWord = 1;
        }
    }
    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}

