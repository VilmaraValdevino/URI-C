#include <stdio.h>
  
int main ()
{
    // Declarando variáveis
    int t, N[1000], cont,x=0;
     
    // Definindo cor do plano de fundo e da fonte
    system("color db");
     
    // armazenando as variáveis da quantidade de teste escolhida pelo usuário
    scanf("%d", &t);
     
    // enquanto contador for menor que 1000 que se refere a quantdade de campos do meu vetor faça a condição à seguir.
    for (cont = 0 ; cont < 1000 ; cont++)
    {
        // Se x for igual à t (quantida de testes) faça a condição ...
        if(x==t)
        {
            // reiniciar o x para nova contagem 
            x=0;
        } 
         
        // impressão de tela do valor de x conforme sua posição correspondente em N 
        printf("N[%d] = %d\n",cont,x);
         
        // incrementando o x
        x++;
    }
  
    return 0;
}