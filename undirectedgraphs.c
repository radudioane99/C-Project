# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "UNDIRECTEDGRAPHS.h"

void readgraph(int *ptr_nr,struct line v[100],int *ptr_nrl,int mat[*ptr_nr][*ptr_nr])
{
    int i;
    printf("Give the lines : \n\n");
    for (i=1;i<=*ptr_nrl;i++)
    {
      scanf("%d",&v[i].x);
      scanf("%d",&v[i].y);
    }
    printf("The graph was successfully read ! \n\n\n");


    int k,j;
    printf("THE ADJACENCY MATRIX IS :\n\n");
    for (k=1;k<=*ptr_nrl;k++)
       {
         mat[v[k].x][v[k].y]=1;
         mat[v[k].y][v[k].x]=1;
       }
    for (i=1;i<=*ptr_nr;i++)
    {
        printf ("\n");
         for (j=1;j<=*ptr_nr;j++)
            printf("%d ", mat[i][j]);
    }
    printf("\n\n");

}
int grad (int n,int *ptr_nr,int mat[*ptr_nr][*ptr_nr])
{ int i;
  int c=0;
  for (i=1;i<=*ptr_nr;i++)
    if (mat[i][n]!=0) c++;
  return c;
}
void conexity (int *ptr_nr,int mat[*ptr_nr][*ptr_nr])
{
    int viz[50];
    int c[50];
    int nod;
    int p,u,i;
    int cont=0;
    for (i=1;i<=50;i++) c[i]=0;
    for (i=1;i<=50;i++) viz[i]=0;
    p=1;u=1;c[1]=1;viz[1]=1;
    while (p<=u)
    {
        nod=c[p];
        for (i=1;i<=*ptr_nr;i++)
        {
            if (mat[i][nod]==1 && viz[i]==0 ) {u++;c[u]=i;viz[i]=1;}
        }
        p++;
    }
    for (i=1;i<=u;i++)
         cont++;
    if (cont==*ptr_nr) printf("IS CONEX\n\n");
     else printf ("IS NOT CONEX\n\n");
}
bool chain (int *ptr_nr,int mat[*ptr_nr][*ptr_nr],int l,int a[l])
{
    int i;
    printf("\nGIVE THE ELEMENTS OF THE ROUTE :\n");
    for (i=1;i<=l;i++)
        scanf("%d",&a[i]);
    bool ok=true;
    for (i=1;i<=l-1;i++)
     if (mat[a[i]][a[i+1]]==0) {ok=false;break;}
     return ok;
}
bool cycle (int *ptr_nr,int mat[*ptr_nr][*ptr_nr],int le,int a[le])
{
    int i,j;
    bool ok=true;
    if (chain(&nr,mat,le,a)==true && a[1]==a[le]) {for (i=1;i<=le-2;i++)
                                                  for (j=i+1;j<=le-1;j++)
                                                    if ((a[i]==a[j] && a[i+1]==a[j+1]) || (a[i]==a[j+1] && a[i+1]==a[j])) ok=false;}
    else ok=false;

  return ok;
}
