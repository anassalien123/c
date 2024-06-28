#include <stdio.h>
#include <stdlib.h>

  int main()
  {
      int a[3][2];
      int i,j;
      
      for(i=0; i<3; i++)
      {
            for(j=0; j<2; j++)
            {
                 scanf("%d",&a[i][j]);             
            }   
      }
      
       for(i=0; i<3; i++)
      {
            for(j=0; j<2; j++)
            {
                 printf("%d\t",&a[i][j]);             
            }   
            printf("\n");
      }
      
      
      getch();    
  }
