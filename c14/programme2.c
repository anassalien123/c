#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int i, j, k;
     for(i=0; i<5; i++)
     {
              //to print spaces //
              for(j=4-i; j>0; j--)
              {
                    printf(" ");                
              }         
              //to print # //
              for(k=0; k<i+1; k++)
              {
                   printf("#");             
              }
              printf("\n");
     }
     
     getch();    
 }
