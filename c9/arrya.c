#include <stdio.h>
#include <stdlib.h>

int main()
    {
          int i;
          int a[100];
          for(i = 0; i<100; i++)
          {
                a[i] = i+1;
          }
          for(i = 0; i<100; i++)
          {
                printf("%i\t",a[i]);      
          }
          
          
          getch();       
    }
