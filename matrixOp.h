#ifndef MATRIX_H
#define MATRIX_H

void add(int A[3][3], int B[3][3], int C[3][3]);
void sub(int A[3][3], int B[3][3], int C[3][3]);
void eleMul(int A[3][3], int B[3][3], int C[3][3]);
void mul(int A[3][3], int B[3][3], int C[3][3]);
int det(int A[3][3]);
void adj(int A[3][3], int C[3][3]);
void tra(int A[3][3], int C[3][3]);
int inv(int A[3][3], float C[3][3]);

#endif



