#include<stdio.h>
#include<stdlib.h>

int main()
{
    float T[10];
    int i;
    float S , P , M ;

    printf("Veuillez saisir les elements du tableau \n");
    for ( i = 0; i < 10; i++)
    {
        printf("T[%d] = ", i++);
        scanf("%f", &T[i]);
    }

    S = 0;
    P = 1;
    for ( i = 0; i < 10; i++)
    {
        S = S + T[i];
        P = P * T[i];
    }
    M = S / 10;
    
    printf("La somme des elements du tableau est : %.2f \n",S);
    printf("Le produil des elements du tableau est : %.2f \n",P);
    printf("La moyenne des elements du tableau est : %.2f \n",M);
    
    return (0);
}