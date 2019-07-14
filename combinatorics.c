#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "COMBINATORICS.h"
bool valid (int k,int st[])
{
    int i;
    bool ok=true;
    for (i=1;i<=k-1;i++)
    if (st[k]==st[i]) {ok=false;break;}
    return ok;
}
void afisare (int k,int st[])
{
    int i;
    for (i=1;i<=k;i++)
        printf("%d ",st[i]);
    printf ("\n");
}
void backpermut(int st[],int n)
{
    int k; ///nivel stiva
    int cont=0;
    bool gasit;
    k=1;st[k]=0; ///initializare stiva
    while (k>0) {gasit=false;
                 while (gasit==false && st[k]<n)
                 {
                     st[k]++;
                     if (valid(k,st)==true) gasit=true;
                 }
                 if (gasit==false) k--; /// daca s-au epuizat variantele cobori nivelul stivei
                 else if(k==n) {afisare (k,st);cont++;}/// daca s-a format una completa afisezi
                    else {k++;st[k]=0;}
                }
    printf ("\nTHERE ARE %d PERMUTATIONS IN TOTAL\n",cont);
}
void backara (int st[],int n,int m)
{
    int k; ///nivel stiva
    int cont=0;
    bool gasit;
    k=1;st[k]=0; ///initializare stiva
    while (k>0) {gasit=false;
                 while (gasit==false && st[k]<n)
                 {
                     st[k]++;
                     if (valid(k,st)==true) gasit=true;
                 }
                 if (gasit==false) k--; /// daca s-au epuizat variantele cobori nivelul stivei
                 else if(k==m) {afisare (k,st);cont++;}/// daca s-a format una completa afisezi(m in functie de aranjamente de cat se cere)
                    else {k++;st[k]=0;}
                }
     printf ("\nTHERE ARE %d ARRANGEMENTS IN TOTAL\n",cont);
}
bool validcombin(int k,int st[])
{
    int i;
    bool ok=true;
    for (i=1;i<=k-1;i++)
    if (st[k]==st[i] || st[k]<st[k-1]) {ok=false;break;}
    return ok;
}
void backcomb (int st[], int n, int m)
{
    int k; ///nivel stiva
    int cont=0;
    bool gasit;
    k=1;st[k]=0; ///initializare stiva
    while (k>0) {gasit=false;
                 while (gasit==false && st[k]<n)
                 {
                     st[k]++;
                     if (validcombin(k,st)==true) gasit=true;
                 }
                 if (gasit==false) k--; /// daca s-au epuizat variantele cobori nivelul stivei
                 else if(k==m) {afisare (k,st);cont++;}/// daca s-a format una completa afisezi(m in functie de aranjamente de cat se cere)
                    else {k++;st[k]=0;}
                }
     printf ("\nTHERE ARE %d COMBINATIONS IN TOTAL\n",cont);
}

