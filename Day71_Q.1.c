#include<stdio.h> 
int main()
{ FILE  *ptr;
   char name[30];
   int  age; 

   ptr=fopen("info.txt","w"); //file opened in write mode 

   if( ptr==NULL)
   {printf("Error could not create file ");
   }

   printf("Enter name");
   fgets( name,sizeof(name),stdin);// no band karna 

   printf("Enter age ");
   scanf("%d",&age );

   // Writing to file
    fprintf(ptr, " Name: %s Age: %d\n", name, age);

    // Closing file
    fclose(ptr);

    printf("\nData has been successfully saved to info.txt\n");

    return 0;
}