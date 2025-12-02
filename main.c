#include <stdio.h>
#include "matrix.h"

int main()
{
  int A[3][3]={{1,2,3},{4,5,6},{7,8,10}};
  int B[3][3]={{2,1,3},{1,2,1},{3,1,2}};
  int C[3][3];
  int i,j;
  
  printf("Matrix A:\n"); 
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++)
          {
            printf("%d ", A[i][j]);
          }
        printf("\n");
    }
  
  printf("Matrix B:\n"); 
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++)
          {
            printf("%d ", B[i][j]);
          }
        printf("\n");
    }
  
  printf("\nAddition:\n");
  add(A, B, C);
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++)
          {
            printf("%d ", C[i][j]);
          }
        printf("\n");
    }

  printf("\nSubtraction:\n");
  sub(A, B, C);
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++)
          {
            printf("%d ", C[i][j]);
          }
        printf("\n");
    }
  
  printf("\nElement-wise Multiplication:\n");
  eleMul(A, B, C);
  for(int i=0;i<3;i++)
  {
        for(int j=0;j<3;j++)
          {
            printf("%d ", C[i][j]);
          }
        printf("\n");
    }
  
  
  return 0;
}
