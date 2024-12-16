#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    int L , C ;
    int i , j ;

    printf("Enter the number to the  row :");
    scanf("%d", &L);
    printf("Enter the number to the columus :");
    scanf("%d", &C);

    for ( i = 1; i <= L; i++)
    {
        for ( j = 1; j <= C; j++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    
    return 0;
}
