#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("Introduire a,b et c:");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a==b && b!=c)
           printf("a egale a b et b different de c\n");
   
   if (!(a<b) || a==0)
           printf("a est superieure ou egale a b ou a egale a 0\n");   

 getch();
}
