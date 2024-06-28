#include <stdio.h>
#include <stdlib.h>

int main()
{
        int userpassword, flag = 0;
        do
        {
            scanf("%d",&userpassword);
            switch(userpassword)    
            {
                case 123 :       
                    printf("the password is correct\n");
                    flag = 1;
                    break;
                case 456 :
                    printf("the password is correct\n");
                    flag =1;
                    break;
                default :
                    printf("the password is incorrerct\n");                                                      
            }
        }
        while(flag == 0);
    getch();
}
