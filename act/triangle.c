#include <stdio.h>
#include <stdlib.h>

int main(){
    int L ;
    int i , j ;

    printf("enter the number of the line : ");
    scanf("%d",&L);

    for ( i = 0; i <= L; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}