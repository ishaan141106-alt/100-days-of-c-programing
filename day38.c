// Q75-Add two matrices.

#include <stdio.h>
int main(){
    int rows1, col1;
    printf("Enter size of first row and column: ");
    scanf("%d %d", &rows1, &col1);

    printf("Enter elements of first matrix: ");
    int matrix1[rows1][col1];
    for(int i=0; i<rows1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }


    int rows2, col2;
    printf("Enter size of second row and column: ");
    scanf("%d %d", &rows2, &col2);

    printf("Enter the elements of second matrix: ");
    int matrix2[rows2][col2];
    for(int i=0; i<rows2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(rows1 != rows2 || col1 != col2){
        printf("Enter valid matrix for addition with equal size."); 
        return 1;
    }

    
    for(int i=0; i<rows1; i++){
        for(int j=0; j<col1; j++){
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;


}


// Q76-Check if a matrix is symmetric.


#include <stdio.h>
int main(){
    int row, col;
    printf("Enter size of first row and column: ");
    scanf("%d %d", &row, &col);

    if(row != col){
    printf("Only square matrix can have symmetry.");
    return 1;
    }

    printf("Enter elements of first matrix: ");
    int matrix[row][col];
    int matrix2[col][row];
    int mark =1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if (matrix[i][j] != matrix[j][i]){        
            mark = 0 ;
            break;
            }
        }
        if(!mark)
        break;
    }
    
    if (mark)
    printf("True");

    else 
    printf("False");

    return 0;
}
