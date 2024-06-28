#include <stdio.h>
#include <stdlib.h>


 int main()
 {
     int i, n;
     scanf("%d",&n);
     float a[n]; 
     for(i = 0; i<n; i++)
     {
           scanf("%f",&a[i]);      
     }   
     float result = 0;
     
     for(i = 0; i<n; i++)
     {
           result = result + a[i];      
     }
     float m = result / n;
     printf("%f",m);
     
     getch();
 }
