#include <stdio.h>
  
int main() {
  
     // 
     int num, cont = 1 ,par = 0, impar = 0, pos =0, neg =0;
         
     // 
     while (cont<=5)
     {
           scanf ("%d" , &num);
            
           if (num%2==0)
           {
              par++;    
           }
           if (num%2!=0)
           {
              impar++;
           }
           if (num>0)
           {
              pos++;
           }
           if (num<0)
           {
              neg++;
           }
                      
           cont++;    
     }
 
     // 
     printf ("%d valor(es) par(es)\n",par);
     printf ("%d valor(es) impar(es)\n",impar);
     printf ("%d valor(es) positivo(s)\n",pos);
     printf ("%d valor(es) negativo(s)\n",neg);
      
     // 
     return 0;
}