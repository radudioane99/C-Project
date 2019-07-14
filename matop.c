# include <stdio.h>
# include "MAT.h"
# include "MATOP.H"
void sum (int A[4][4],int B[4][4],int C[4][4])
{
     int i,j;
     for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           C[i][j]=A[i][j]+B[i][j];
}
void dif (int A[4][4],int B[4][4],int C[4][4])
{
     int i,j;
     for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           C[i][j]=A[i][j]-B[i][j];
}
void prd (int A[4][4],int B[4][4],int C[4][4])
{
  int i,j,k;
  for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           C[i][j]=0;
    for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
       	{
				for(k=1;k<=3;k++)
        			C[i][j]+=A[i][k]*B[k][j];
      	}
}
void printflmat (float D[4][4])
{
    int i,j;
    for (i=1;i<=3;i++)
    {
        printf("\n");
        for (j=1;j<=3;j++)
           printf("%.2f ",D[i][j]);
    }
}
void sdiv (int A[4][4],float D[4][4],int n)
{ int i,j;
     for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           D[i][j]=A[i][j]/(float)n;



}

void sprd (int A[4][4],int C[4][4],int c)
{
    int i,j;
     for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           C[i][j]=A[i][j]*c;
}
