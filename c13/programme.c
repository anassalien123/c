#include <stdio.h>
#include <stdlib.h>

  int main()
  {
      int  i, j;
      for(i=0; i<4; i++)
      {
             for(j=0; j<i+1; j++)           
             {
                   printf("#");            
             }
             printf("\n");
      }
      
      for(i=0; i<5; i++)
      {
           printf("#####\n");             
      }
      
      for(i=0; i<4; i++)
      {
           for(j=4-i; j>0; j--)
           {
                 printf("#");                
           }
           printf("\n");             
      }
      
    getch();  
  }
