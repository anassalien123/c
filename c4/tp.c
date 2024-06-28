#include <stdio.h>
#include <stdlib.h>
   /*
   
   for(initialization; condition; update)
           {
                code;                    
           }
   
   */
   
   
   int main()
   {
         int i;       
         int x;
             
         scanf("%d",&x);
         
         int result =1;
         
         for(i=x; i!=0; i--)
         {
                 result = result *i;      
         }    
           
           printf("the answer is : %d  ",result);
           
         getch();
   }
   
