#include <stdio.h>
  
int main() {
  
    //  
    int codUm,codDois,quantUm,quantDois;
    float valorUm,valorDois,total;
      
    //   
    scanf("%d",&codUm);
    scanf("%d",&quantUm);
    scanf("%f",&valorUm);
     
    //  
    scanf("%d",&codDois);
    scanf("%d",&quantDois);
    scanf("%f",&valorDois);
      
    //   
    total = ( (quantUm*valorUm) + (quantDois*valorDois) );
      
    //   
    printf("VALOR A PAGAR: R$ %.2f\n",total);
  
    return 0;
}