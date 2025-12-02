#ifndef MATRIX_H
#define MATRIX_H

int add(int A[3][3], int B[3][3], int result[3][3]);
int sub(int A[3][3], int B[3][3], int result[3][3]);
int ele(int A[3][3], int B[3][3], int result[3][3]);
int det(int A[3][3], int B[3][3], int result[3][3]);
int adj(int A[3][3], int B[3][3], int result[3][3]);
int mat(int A[3][3], int B[3][3], int result[3][3]);
int tra(int A[3][3], int B[3][3], int result[3][3]);
int inv(int A[3][3], int B[3][3], int result[3][3]);

#endif
