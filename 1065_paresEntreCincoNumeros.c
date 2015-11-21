#include <stdio.h>
  
int main() {
  
    //   
     int num, cont = 1 ,par = 0;
      
     //  
     while (cont<=5)
     {
           scanf ("%d" , &num);
            
           if (num%2==0)
           {
              par++;    
           }  
              
       cont++;    
     }
      
     //  
     printf ("%d valores pares\n",par);
      
     //  
  
    return 0;
}