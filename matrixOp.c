#include <stdio.h>
#include "matrixOp.h"

int i,j;

void add(int A[3][3], int B[3][3], int C[3][3]) 
{
    for (i = 0; i < 3; i++)
      {
        for ( j = 0; j < 3; j++)
          {
            C[i][j] = A[i][j] + B[i][j];
          }
      } 
}

void sub(int A[3][3], int B[3][3], int C[3][3]) 
{
    for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
          {
            C[i][j] = A[i][j] - B[i][j];
          }
      } 
}

void eleMul(int A[3][3], int B[3][3], int C[3][3]) 
{
    for ( i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
          {
            C[i][j] = A[i][j] * B[i][j];
          }
      } 
}

void mul(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void tra(int A[3][3], int T[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[j][i] = A[i][j];
        }
    }
}


