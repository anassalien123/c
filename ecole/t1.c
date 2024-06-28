#include<stdio.h>

main()
{  
      int n,somme=0,i=0;  /*n entier et somme et i entier mitialises a 0  */
      
      printf("Introduire n: ");
      scanf("%d",&n);
      do                 /*le programme rajoute a somme puis l'incremente tant que i<=n  */
      {
            somme=somme+i; 
            i++;                       
      }    
      while(i<=n);
      printf("%d",somme); /*le programmme affiche la somme des nomber compris enter 0 et n  */
      getch();
}
