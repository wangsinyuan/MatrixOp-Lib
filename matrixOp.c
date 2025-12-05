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

int det(int A[3][3], int B[3][3], int result[3][3]) {
    int a11 = A[0][0], a12 = A[0][1], a13 = A[0][2];
    int a21 = A[1][0], a22 = A[1][1], a23 = A[1][2];
    int a31 = A[2][0], a32 = A[2][1], a33 = A[2][2];

    int d =
        a11 * a22 * a33 +
        a12 * a23 * a31 +
        a13 * a21 * a32 -
        a13 * a22 * a31 -
        a11 * a23 * a32 -
        a12 * a21 * a33;

    result[0][0] = d;
    result[0][1] = result[0][2] =
    result[1][0] = result[1][1] = result[1][2] =
    result[2][0] = result[2][1] = result[2][2] = 0;

    return 0;
}

int adj(int A[3][3], int B[3][3], int result[3][3]) {
    int a11 = A[0][0], a12 = A[0][1], a13 = A[0][2];
    int a21 = A[1][0], a22 = A[1][1], a23 = A[1][2];
    int a31 = A[2][0], a32 = A[2][1], a33 = A[2][2];

    int c11 =  (a22 * a33 - a23 * a32);
    int c12 = -(a21 * a33 - a23 * a31);
    int c13 =  (a21 * a32 - a22 * a31);

    int c21 = -(a12 * a33 - a13 * a32);
    int c22 =  (a11 * a33 - a13 * a31);
    int c23 = -(a11 * a32 - a12 * a31);

    int c31 =  (a12 * a23 - a13 * a22);
    int c32 = -(a11 * a23 - a13 * a21);
    int c33 =  (a11 * a22 - a12 * a21);

    result[0][0] = c11;  result[0][1] = c21;  result[0][2] = c31;
    result[1][0] = c12;  result[1][1] = c22;  result[1][2] = c32;
    result[2][0] = c13;  result[2][1] = c23;  result[2][2] = c33;

    return 0;
}


void tra(int A[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[j][i] = A[i][j];
        }
    }
}

int inv(int A[3][3], float C[3][3]){
    int det = det(A);
    if(det==0) return 0;

    int adj[3][3];
    adj(A, adj);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = adj[i][j]/det;
            }
        }
    return 1;
}

