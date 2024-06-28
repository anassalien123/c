#include <stdio.h>
#include <stdlib.h>
 
 /*
         ! not
         || or
         && and
 
 
 
         initialization
         while(condition)
         {
              code;
              update;                
         }
 
 */
 
 int main()
 {
      int x;
           
      scanf("%d",&x);
      
      int result =1;
      int i=x;     
                                     
       while(i!=0 && i!=2)
       {
           result = result * i;
           i--;            
       }
           
           
      printf("the answer is : %d ",result);
           
     getch();      
     
 }
