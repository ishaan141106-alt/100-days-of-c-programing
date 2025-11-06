 
// Q51- Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

// #include <stdio.h>
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
            
//         }

//         for(int j=n-i+1; j<=n; j++){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q52-Write a program to print the following pattern: 

#include <stdio.h>
int main(){
    int n=5;

    for(int i=1; i<=n; i+=2){
        for(int j=0; j<i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    for(int i=n-2; i>=1; i-=2){
        for(int j=0; j<i; j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}



