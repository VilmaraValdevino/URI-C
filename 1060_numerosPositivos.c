#include <stdio.h>
  
int main() {
  
        // 
        double cont = 1,num,pos = 0; 
  
        // 
        for (cont;cont<=6;cont++)
        {
            scanf("%lf",&num); 
   
            if (num>0) 
     
            pos++; 
        } 
         
        // 
        printf("%.lf valores positivos\n",pos);
  
        // 
        return 0;
}