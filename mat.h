#ifndef MAT_H_INCLUDED
#define MAT_H_INCLUDED
///Arrays
 int matrice[4][4];
 int matricec[4][4];
 int mtransp[4][4];
 float minverse[4][4];
 int rez[1][3];
///Functions prototypes
int determinant(int matrice [][4] );
extern void read(int matrice [][4]);
extern void print(int matrice [][4]);
extern void transpose (int matrice [][4],int mtransp [][4]);
extern void inverse (int matrice [][4],int mtransp[][4],float minverse[][4]);
extern void sys(int matrice [][4],int rez[1][3]);


#endif // MAT_H_INCLUDED
