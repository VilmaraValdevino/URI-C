#include <stdio.h>
  
int main() {
  
    //  
    char nome;
    double salFixo,vendas,comissao,final;
      
    //   
    scanf("%s",&nome);
    scanf("%lf",&salFixo);
    scanf("%lf",&vendas);
      
    //   
    comissao = (vendas*0.15);
    final = salFixo+comissao;
      
    //   
    printf("TOTAL = R$ %.2lf\n",final);
  
    // 
    return 0;
}