#include <stdio.h>
#include <stdlib.h>

int main()
{
          int password, userpassword;
          
          password = 123;
          while(1)
          {    
              printf("tape your password\n");
              scanf("%d",&userpassword);
              if(userpassword == password)
              {
                  printf("the password is correct\n");
                  break;                
              }        
              else
                  printf("the password is incorrect\n"); 
          }    
          
    getch();
}
