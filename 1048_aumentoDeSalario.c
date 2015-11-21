#include <stdio.h>
  
int main() {
  
    // 
    double salario,novosalario,reajuste;
    int pct;
      
    // 
    scanf("%lf",&salario);
      
    // 
    if ( (salario >= 0) && (salario<=400.00) )
    {
        novosalario = (salario + (salario*0.15));
        reajuste = (novosalario - salario);
        pct = 15;
    }
    else if ((salario >= 400.01)&& (salario <= 800.00 ))
    {
        novosalario = (salario + (salario*0.12));
        reajuste = (novosalario - salario);
        pct = 12;
    }
    else if ((salario >= 800.01 ) && (salario <= 1200.00 ))
    {
        novosalario = (salario + (salario*0.10));
        reajuste = (novosalario - salario);
        pct = 10;
    }
    else if ((salario >= 1200.01 ) && (salario <= 2000.00 ))
    {
        novosalario = (salario + (salario*0.07));
        reajuste = (novosalario - salario);
        pct = 7;
    } 
    else if (salario >= 2000.01)
    {   
        novosalario = (salario + (salario*0.04));
        reajuste = (novosalario - salario );
        pct = 4;
    }
      
    // 
    printf("Novo salario: %.2lf\n",novosalario);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: %d %%\n",pct);
      
    // 
    return 0;
}