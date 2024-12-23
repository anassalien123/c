#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    int L  ;
    int i , j ;

    printf("Enter the number to the  row :");
    scanf("%d", &L);

    for ( i = 1; i <= L; i++)
    {
        for ( j = 1; j <= L - i; j++)
        {
            printf("  ");
        }
        for ( j = 1; j <= L; j++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    
    return 0;
}
