#include <stdio.h>
  
int main() {
  
     // 
     int X, cont = 1 ;
       
     // 
     scanf("%d", &X);
        
     // 
     while (cont<=6)
     {
           if(X%2!=0)
           {
               printf("%d\n",X);
               cont++;
           }
                      
           X++;    
     }
      
     // 
     return 0;
}