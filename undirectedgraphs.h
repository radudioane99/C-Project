#ifndef UNDIRECTEDGRAPHS_H_INCLUDED
#define UNDIRECTEDGRAPHS_H_INCLUDED
/// Global variables
int nr,nrl,n;
/// Arrays
int mat[100][100];
int p[50];
int a[50];
/// Structures of data
typedef struct line {int x;int y;}line;
struct line v[100];
/// Functions Prototypes
extern void readgraph(int *ptr_nr,struct line[100],int *ptr_nrl,int mat[100][100]);
extern void printmat(int *ptr_nr,int mat[*ptr_nr][*ptr_nr],struct line v[100],int *ptr_nrl);
extern int grad (int n,int *ptr_nr,int mat[*ptr_nr][*ptr_nr]);
extern void conexity(int *ptr_nr,int mat[*ptr_nr][*ptr_nr]);
extern bool chain(int *ptr_nr,int mat[*ptr_nr][*ptr_nr],int l,int a[l]);
extern bool cycle(int *ptr_nr,int mat[*ptr_nr][*ptr_nr],int le,int a[le]);


#endif // UNDIRECTEDGRAPHS_H_INCLUDED
