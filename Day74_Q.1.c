//Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

#include<stdio.h> 
int main()
{FILE *source ,*destination;
    int ch;
    char sourcefile[100] , destfile[100];
    printf("Enter source file name ");
    scanf("%s",sourcefile);

    printf("Enter destination file name ");
    scanf("%s",destfile);
    
    source = fopen(sourcefile, "r"); //opening of files 
    destination = fopen(destfile, "w");

    if (source == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }

    // Copy characters one by one
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully!\n");

    
    fclose(source);
    fclose(destination);

    return 0;
}
