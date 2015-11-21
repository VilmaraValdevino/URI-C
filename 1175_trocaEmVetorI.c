#include <stdio.h>
  
int main() {
  
int vetor[20],aux[20],cont,contt=19;
 
 
       for(cont=0;cont<20;cont++)
       {
       scanf("%d",&vetor[cont]);  
       }
        
       for (cont=0;cont<20;cont++)
       {
       aux[cont] = vetor[contt];
       contt--;
       }
        
       for (cont=0;cont<20;cont++)
       {
        printf("N[%d] = %d\n",cont,aux[cont]);
       }
  
    return 0;
}