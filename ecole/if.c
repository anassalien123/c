#include <stdio.h>
   main()
       {
             int a;
             char c;
             printf("introduire un nomber et une letter:");
             scanf("%d",&a);
             switch(a)
             {
                      case0:     printf("le nomber  introduit est zero \n");
                                 break;
                      case1:     printf("le nomber introduit est 1 \n");
                                 break;
                      default:   printf("le nomber introduit est different de 0 et 1 \n");
             }
            
             getch(); 
       }   
              
        
   
