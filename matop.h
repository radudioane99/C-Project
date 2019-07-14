#ifndef MATOP_H_INCLUDED
#define MATOP_H_INCLUDED
/// The Matrices
int A[4][4];
int B[4][4];
int C[4][4];
float D [4][4];
///Global Variables
int n,c;
/// Functions Prototypes
extern void read(int matrice [][4]);
extern void print(int matrice [][4]);
extern void printflmat(float D [][4]);
extern void sum (int A[4][4],int B[4][4],int C[4][4]);
extern void dif (int A[4][4],int B[4][4],int C[4][4]);
extern void prd (int A[4][4],int B[4][4],int C[4][4]);
extern void sdiv (int A[4][4],float D[4][4],int n);
extern void sprd (int A[4][4],int C[4][4],int c);
#endif // MATOP_H_INCLUDED
