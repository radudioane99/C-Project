#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MAT.h"
#include "undirectedgraphs.h"
#include "COMBINATORICS.h"
#include "MATOP.h"
int main()
{
    /// MAIN MENU
    int choice=0;
    system("COLOR 2F");
    printf ("\t\t\t\t WELCOME TO MATHLAB! \n\n\n");
    printf ("Choose what are you interested in : \n\n");
    while (choice!=6)
    {
     printf ("1.Matrices \n");
     printf ("2.Undirected Graphs\n");
     printf ("3.Combinatorics\n");
     printf ("4.Basic operations with matrices :\n");
     printf ("5.Credits\n");
     printf ("6.Exit\n");
     printf("\nGive choice : \n");
     scanf("%d",&choice);
     system("cls");
    switch (choice)
    {
        case 1 : {int op;op=1;system("COLOR 1A");
                  printf ("\t\t\tWelcome to the MATHLAB matrix menu \n The following operations are available : \n");
                  while (op!=8)
                  {

                      printf ("1.READ A MATRIX\n");
                      printf ("2.PRINT A MATRIX\n");
                      printf ("3.CALCULATE THE DETERMINANT\n");
                      printf ("4.TRANSPOSE OF THE MATRIX\n");
                      printf ("5.INVERSE OF A MATRIX\n");
                      printf ("6.SHOW THE CORESPONDENT EQUATIONS SYSTEM + COMPATIBILITY\n");
                      printf ("7.CLEAR THE SCREEN\n");
                      printf ("8.EXIT MATRIX MENU\n\n\n");
                      scanf("%d",&op);
                      switch (op)
                      {
                          case 1 : {printf ("Give the matrix (3 X 3): \n\n");
                                    read(matrice);
                                    printf("The matrix was successfully read !\n\n");
                                    break;}
                          case 2 : {print(matrice);printf("\n\n");break;}
                          case 3 : {printf("\n\n");printf("The determinant of the matrix is %d\n\n",determinant(matrice));break;}
                          case 4 : {transpose(matrice,mtransp);
                                    printf ("The transpose matrix is : \n\n");
                                    print(mtransp);printf("\n\n");break;}
                          case 5 : {printf("\n\n");inverse(matrice,mtransp,minverse);printf("\n\n");break;}
                          case 6 : {printf("\nGive the results for the equations system :\n");sys(matrice,rez);
                                    printf("\n\n");break;}
                          case 7 : {printf("\n\n");system("cls");printf("\n\n");break;}
                          case 8 : {system("COLOR 2F");system("cls");printf ("\t\t\t\t WELCOME TO MATHLAB! \n\n\n");
                                    printf ("Choose what are you interested in : \n\n");break;}
                          default: {printf("\n\n");printf("You give an invalid command\n");printf("\n\n");break;}

                      }
                  }
                  printf ("\n\n");break;
                  }
        case 2 : {int ope;ope=1;system("COLOR FC");
                  printf ("\t\t\tWelcome to the MATHLAB Undirected Graphs menu \n The following operations are available : \n\n\n");
                  while (ope!=7)
                  {
                      printf("1.READ A GRAPH+ADJACENCY MATRIX \n");
                      printf("2.THE DEGREE OF A NODE \n");
                      printf("3.CONEXITY\n");
                      printf("4.CHAIN VERIFICATION\n");
                      printf("5.CYCLE VERIFICATION\n");
                      printf("6.CLEAR SCREEN\n");
                      printf("7.EXIT UNDIRECTED GRAPHS MENU\n\n\n");
                      scanf("%d",&ope);
                       switch (ope)
                       {
                           case 1:{
                                   printf ("Give the number of nodes , number<=100: \n");
                                   scanf("%d",&nr);
                                   printf ("Give the number of lines : \n");
                                   scanf("%d",&nrl);
                                   readgraph(&nr,v,&nrl,mat);break;
                                  }
                           case 2:{printf("Give the node :\n");
                                   scanf("%d",&n);
                                   printf("The degree of the node %d is %d \n\n",n,grad(n,&nr,mat));
                                   break;}
                           case 3:{conexity(&nr,mat);
                                   printf("\n\n");
                                   break;
                                  }
                           case 4:{int l;
                                   printf("GIVE THE LENGTH OF THE ROUTE: \t");
                                   scanf ("%d",&l);
                                   if (chain(&nr,mat,l,a)==false) printf("\nTHE ROUTE ENTERED IS NOT A CHAIN\n\n");
                                   else printf("\nTHE ROUTE ENTERED IS A CHAIN\n\n");
                                   break;
                                  }
                           case 5:
                                  {
                                   int le;
                                   printf("GIVE THE LENGTH OF THE ROUTE: \t");
                                   scanf ("%d",&le);
                                   if (cycle(&nr,mat,le,a)==false) printf("\nTHE ROUTE ENTERED IS NOT A CYCLE\n\n");
                                   else printf("\nTHE ROUTE ENTERED IS A CYCLE\n\n");
                                   break;
                                  }
                          case 6 : {printf("\n\n");system("cls");printf("\n\n");break;}
                          case 7 : {system("COLOR 2F");system("cls");printf ("\t\t\t\t WELCOME TO MATHLAB! \n\n\n");
                                    printf ("Choose what are you interested in : \n\n");break;}
                          default: {printf("\n\n");printf("You give an invalid command\n");printf("\n\n");break;}


                       }



                  }


                  printf("\n\n");break;}
        case 3 : {
                  int oper;oper=1;system("COLOR 5F");
                  printf ("\t\t\tWelcome to the MATHLAB Combinatorics menu \n The following operations are available : \n\n\n");
                    while (oper!=5)
                    {
                      printf("1.PERMUTATIONS , P(n)\n");
                      printf("2.ARRANGEMENTS , A(n,m)\n");
                      printf("3.COMBINATIONS , C(n,m)\n");
                      printf("4.CLEAR SCREEN\n");
                      printf("5.EXIT COMBINATORICS MENU\n\n\n");
                      scanf("%d",&oper);
                       switch (oper)
                       {

                         case 1 : {
                                    printf("Give n :  ");scanf("%d",&n);
                                    backpermut(st,n);
                                    printf ("\n\n");
                                    break;
                                  }
                         case 2 : {
                                    printf("Give n :  ");scanf("%d",&n);
                                    printf("Give m :  ");scanf("%d",&m);
                                    backara(st,n,m);
                                    printf("\n\n");
                                    break;
                                  }
                         case 3:  {
                                    printf("Give n :  ");scanf("%d",&n);
                                    printf("Give m :  ");scanf("%d",&m);
                                    backcomb(st,n,m);
                                    printf("\n\n");
                                    break;
                                  }
                          case 4 : {printf("\n\n");system("cls");printf("\n\n");break;}
                          case 5 : {system("COLOR 2F");system("cls");printf ("\t\t\t\t WELCOME TO MATHLAB! \n\n\n");
                                    printf ("Choose what are you interested in : \n\n");break;}
                          default: {printf("\n\n");printf("You give an invalid command\n");printf("\n\n");break;}
                       }


                    }







            printf("\n\n");break;}

        case 4 : { int o;o=1;system("COLOR F9");
                   printf ("\t\tWelcome to the MATHLAB Basic operations with matrices menu \n The following operations are available : \n\n\n");
                   while (o!=8)
                   {
                      printf ("1.READ 2 MATRICES (3 X 3) :\n");
                      printf ("2.ADDITION , (+)\n");
                      printf ("3.SUBTRACTION , (-)\n");
                      printf ("4.MULTIPLICATION , (X)\n");
                      printf ("5.THE MATRIX DIVIDED BY SCALAR  , (A/n)\n");
                      printf ("6.MULTIPLICATION WITH SCALAR , (c X A)\n");
                      printf ("7.CLEAR SCREEN\n");
                      printf ("8.EXIT BASIC OPERATIONS WITH MATRICES MENU\n\n\n");
                      scanf("%d",&o);
                      switch(o)
                      {
                          case 1:{printf ("A =  \n");
                                  read(A);
                                  printf("\n");
                                  printf ("B =  \n");
                                  read(B);
                                  printf("\n");
                                  printf("The matrices were successfully read !\n\n");
                                  break;
                                  }
                          case 2 :{ print (A);
                                    printf("\n");
                                    print (B);
                                    printf("\n");
                                    sum(A,B,C);
                                    printf ("\nTHE SUM IS :\n");
                                    print(C);printf("\n\n");
                                    break;
                                  }
                          case 3 :{
                                    print (A);
                                    printf("\n");
                                    print (B);
                                    printf("\n");
                                    dif(A,B,C);
                                    printf ("\nTHE DIFFERENCE IS :\n");
                                    print(C);printf("\n\n");
                                    break;
                                  }
                           case 4 :{
                                    print (A);
                                    printf("\n");
                                    print (B);
                                    printf("\n");
                                    prd(A,B,C);
                                    printf ("\nTHE PRODUCT IS :\n");
                                    print(C);printf("\n\n");
                                    break;
                                   }
                          case 5 : {
                                    printf ("A =  \n");
                                    read(A);
                                    printf("\n");
                                    printf("Give n :  ");
                                    scanf("%d",&n);
                                    sdiv(A,D,n);
                                    printf ("\n THE MATRIX X DIVIDED BY SCALAR n :\n");
                                    printflmat(D);printf("\n\n");
                                    break;
                                    }
                          case 6 :  {
                                    printf ("A =  \n");
                                    read(A);
                                    printf("\n");
                                    printf("Give c :  ");
                                    scanf("%d",&c);
                                    sprd(A,C,c);
                                    printf ("\nTHE SCALAR c X MATRIX A IS  :\n");
                                    print(C);printf("\n\n");
                                    break;

                                    }
                            case 7 : {printf("\n\n");system("cls");printf("\n\n");break;}
                            case 8 : {system("COLOR 2F");system("cls");printf ("\t\t\t\t WELCOME TO MATHLAB! \n\n\n");
                                      printf ("Choose what are you interested in : \n\n");break;}
                          default: {printf("\n\n");printf("You give an invalid command\n");printf("\n\n");break;}

                      }
                   }





                  printf("\n\n");break;}
        case 5 : {printf ("\t\t\t MATHLAB CREDITS:\n\n");
                  printf ("Student programmer : Dioane Radu-Alexandru\n\n");
                  printf ("Coordinating teacher: Gota Dan\n\n");
                  printf ("University: Technical University of Cluj Napoca\n\n");
                  printf ("Faculty: Automation and Computer Science\n\n\n\n");
                 }
        case 6 : {break;}
        default: {printf("You give an invalid command\n\n");break;}
    }

    }




    return 0;
}
