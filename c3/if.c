#include <stdio.h>
#include <stdlib.h>

  int main ()
{
       /*
           if(condition)
           {
                code;             
           } 
           else
           {
               code;    
           }
           ------------------------------------------
      */
            int password = 123;
            
            int user;
            
            printf("your password ");
            
            scanf("%d",&user);
                        
            if(password == user)
            {
                 printf ("your password is correct\n");          
            }
            
            else
            {
                 printf("Your password is incorrect\n");    
            }

      getch();
}
