#include <stdio.h>
#include "matrixOp.h"

int main() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,10}};
    int B[3][3] = {{2,1,3},{1,2,1},{3,1,2}};
    int C[3][3];
    float C_inv[3][3];
    int i,j;

    printf("Matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition:\n");
    add(A,B,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction:\n");
    sub(A,B,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nElement-wise Multiplication:\n");
    eleMul(A,B,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplication A*B:\n");
    mul(A,B,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of A:\n");
    tra(A,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nDeterminant of A: %d\n", det(A));

    printf("\nAdjoint of A:\n");
    adj(A,C);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nInverse of A:\n");
    if(inv(A, C_inv)){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%.2f ", C_inv[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("A is not invertible.\n");
    }

    return 0;
}

