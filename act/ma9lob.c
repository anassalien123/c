#include <stdio.h>
#include <stdlib.h>

int main(){
    int C , P;
    int i , j ;

    printf("enter the number of column : ");
    scanf("%d",&C);
    P = 1;
    for ( i = 1; i <= (2*C-1); i++)
    {
        for ( j = 1; j <= P; j++)
        {
            printf("* ");
        }
        if (i<C)
        {
            P++;
        }else
        {
            P--;
        }
        printf("\n");
    }
    
}