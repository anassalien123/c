#include <stdio.h>
#include <stdlib.h>

// prototype
    float squ(float a);


///main function

   int main()
   {
       float x = 2.5;
       float y = squ(x);
       printf("%d\n",y);    
   }    
   
   
/// new function

  float squ(float a)
  {
        float result = a * a;
        getch();      
  }
