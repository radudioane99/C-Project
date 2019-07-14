# include <stdio.h>
# include <stdbool.h>
# include "MAT.h"
void read ( int matrice [4][4])
{
    int i,j;
    for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           scanf("%d",&matrice[i][j]);

}
void print (int matrice[4][4])
{
    int i,j;
    for (i=1;i<=3;i++)
    {
        printf("\n");
        for (j=1;j<=3;j++)
           printf("%d ",matrice[i][j]);
    }
}
int determinant(int matrice[4][4])
{
    int det;
    /// Triangle law
    det=matrice[1][1]*matrice[2][2]*matrice[3][3]+matrice[1][2]*matrice[2][3]*matrice[3][1]+matrice[2][1]*matrice[3][2]*matrice[1][3];
    det=det-(matrice[3][1]*matrice[2][2]*matrice[1][3]+matrice[1][2]*matrice[2][1]*matrice[3][3]+matrice[2][3]*matrice[3][2]*matrice[1][1]);
    return det;
}

void transpose (int matrice[4][4], int mtransp[4][4])
{
    int i,j;
    for (i=1;i<=3;i++)
        for (j=1;j<=3;j++)
           mtransp[i][j]=matrice[j][i];
}
void inverse (int matrice [4][4],int mtransp[4][4],float minverse [4][4])
{
   int det;
   /// calculating transpose
   transpose (matrice,mtransp);
   printf("\n\n");
   det=determinant(matrice);
   if (det!=0)
   {
   ///calculating the inverse
   printf("THE INVERSE MATRIX IS : \n");
   minverse[1][1]=(mtransp[2][2]*mtransp[3][3]-mtransp[3][2]*mtransp[2][3])/(float)det;
   minverse[1][2]=(-1)*(mtransp[2][1]*mtransp[3][3]-mtransp[2][3]*mtransp[3][1])/(float)det;
   minverse[1][3]=(mtransp[2][1]*mtransp[3][2]-mtransp[2][2]*mtransp[3][1])/(float)det;
   minverse[2][1]=(-1)*(mtransp[1][2]*mtransp[3][3]-mtransp[3][2]*mtransp[1][3])/(float)det;
   minverse[2][2]=(mtransp[1][1]*mtransp[3][3]-mtransp[1][3]*mtransp[3][1])/(float)det;
   minverse[2][3]=(-1)*(mtransp[1][1]*mtransp[3][2]-mtransp[1][2]*mtransp[3][1])/(float)det;
   minverse[3][1]=(mtransp[1][2]*mtransp[2][3]-mtransp[2][2]*mtransp[1][3])/(float)det;
   minverse[3][2]=(-1)*(mtransp[1][1]*mtransp[2][3]-mtransp[2][1]*mtransp[1][3])/(float)det;
   minverse[3][3]=(mtransp[1][1]*mtransp[2][2]-mtransp[1][2]*mtransp[2][1])/(float)det;
   int i,j;
    for (i=1;i<=3;i++)
    {
        printf("\n");
        for (j=1;j<=3;j++)
           printf("%.2f\t",minverse[i][j]);
    }
   }
   else printf ("THE MATRIX IS NOT INVERSABLE \n");
}

void sys(int matrice [4][4],int rez[1][3])
{
    scanf("%d",&rez[1][1]);
    scanf("%d",&rez[1][2]);
    scanf("%d",&rez[1][3]);

    /// THE BRACKET PLUS SYSTEM
    printf(" --   ");printf("%dx + %dy + %dz = %d",matrice[1][1],matrice[1][2],matrice[1][3],rez[1][1]);
    printf ("\n");
    printf(" |");
    printf ("\n");
    printf(" |");
    printf ("\n");
    printf(" <-   "); printf("%dx + %dy + %dz = %d",matrice[2][1],matrice[2][2],matrice[2][3],rez[1][2]);
    printf ("\n");
    printf(" |");
    printf ("\n");
    printf(" |");
    printf ("\n");
    printf(" --   "); printf("%dx + %dy + %dz = %d",matrice[3][1],matrice[3][2],matrice[3][3],rez [1][3]);
    printf ("\n\n");
    /// COMPATIBILITY
     int i,j;
    bool da2=false;
    bool da2s=false;
    int ranks,rankm;
    int matricec[4][4];
    for (i=1;i<=3;i++)
        for (j=1;j<=2;j++)
            matricec[i][j]=matrice[i][j];
    matricec[1][3]=rez[1][1];
    matricec[2][3]=rez[1][2];
    matricec[3][3]=rez[1][3];
    if (determinant(matrice)!=0) printf("\nTHE SYSTEM IS COMPATIBLE DETERMINED\n");
    else if (determinant(matricec)!=0) {printf("\nTHE SYSTEM IS INCOMPATIBLE\n");}
      else{rankm=2;ranks=2;
         if (matrice[1][1]*matrice[2][2]-matrice[1][2]*matrice[2][1]!=0) {da2=true;da2s=true;}
         if (matrice[1][2]*matrice[2][3]-matrice[1][3]*matrice[2][2]!=0) {da2=true;da2s=true;}
         if (matrice[2][1]*matrice[3][2]-matrice[2][2]*matrice[3][1]!=0) {da2=true;da2s=true;}
         if (matrice[2][2]*matrice[3][3]-matrice[3][2]*matrice[2][3]!=0) {da2=true;da2s=true;}
         if (matricec[1][2]*matricec[2][3]-matricec[1][3]*matricec[2][2]!=0) {da2s=true;}
         if (matricec[2][2]*matricec[3][3]-matricec[2][3]*matricec[3][2]!=0) {da2s=true;}

         if (da2==false) rankm=1;
         else rankm=2;

         if (da2s==false) ranks=1;
         else ranks=2;

         if (rankm==ranks && rankm<3) printf("\nTHE SYSTEM IS COMPATIBLE UNDETERMINED\n");
           else if (rankm!=ranks) printf("\nTHE SYSTEM IS INCOMPATIBLE");
        }
}


