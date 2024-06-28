//preprocessors
#include <stdio.h>
#include <string.h>
//constants///
#define pi 3.14

//prototypes//
 void add(void);
 void sub(void);
 void mul(void);
 void div(void);
 void circ(void);
 void area(void);



//main///


 int main()
 {
     printf("welcome to the calculator\n\n");
     int choise;
     for (;;)
     {
         printf("choose en order : \n");
         printf("1- add\n");
         printf("2- sud\n");
         printf("3- mul\n");
         printf("4- div\n");
         printf("5- circ\n");
         printf("6- area\n");
         printf("push any other key to exit\n\n");
         
         scanf("%d",&choise);
         if(choise == 1)
               add();
         else if(choise == 2)
               sub();
         else if(choise == 3)
               mul();
         else if(choise == 4)
               div();
         else if(choise == 5)
               circ();
         else if(choise == 6)
               area();
         else
             break;                                  
     }
         
 }
 
 
 void add(void)
 {
      float x, y;
      printf("enter two num to sum : \n");
      scanf("%f", &x);
      scanf("%f", &y);
      printf("%f\n",x+y);     
 }
 
 void sub(void)
 {
      float x, y;
      printf("enter two num to sum : \n");
      scanf("%f", &x);
      scanf("%f", &y);
      printf("%f\n",x-y);     
 }
 
 void mul(void)
 {
      float x, y;
      printf("enter two num to sum : \n");
      scanf("%f", &x);
      scanf("%f", &y);
      printf("%f\n",x*y);     
 }
 
 void div(void)
 {
      float x, y;
      printf("enter two num to sum : \n");
      scanf("%f", &x);
      scanf("%f", &y);
      printf("%f\n",x/y);     
 }
 
 void circ(void)
 {
      float r;
      printf("enterr one num to sum : \n");
      scanf("%f", &r);
      printf("%f\n",2*pi*r);     
 }
 
 void area(void)
 {
      float r;
      printf("enter one num to sum : \n");
      scanf("%f", &r);
      printf("%f\n",pi*r*r);     
 }

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
