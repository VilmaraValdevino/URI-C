#include <stdio.h>
  
int main() {
  
    //  
    double cont = 1,num,pos = 0,soma = 0,media;
         
    // 
    for (cont;cont<=6;cont++)
    {
       scanf("%lf",&num); 
 
        if (num>0) 
        {
            pos++;
          
            soma += num; 
           
            media = soma/pos;
        }        
    }
     
    // 
    printf("%.lf valores positivos\n",pos);
    printf ("%.1lf\n",media);
     
    // 
    return 0;
}