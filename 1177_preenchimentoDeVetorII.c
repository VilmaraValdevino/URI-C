#include <stdio.h>
  
int main ()
{
    // Declarando vari�veis
    int t, N[1000], cont,x=0;
     
    // Definindo cor do plano de fundo e da fonte
    system("color db");
     
    // armazenando as vari�veis da quantidade de teste escolhida pelo usu�rio
    scanf("%d", &t);
     
    // enquanto contador for menor que 1000 que se refere a quantdade de campos do meu vetor fa�a a condi��o � seguir.
    for (cont = 0 ; cont < 1000 ; cont++)
    {
        // Se x for igual � t (quantida de testes) fa�a a condi��o ...
        if(x==t)
        {
            // reiniciar o x para nova contagem 
            x=0;
        } 
         
        // impress�o de tela do valor de x conforme sua posi��o correspondente em N 
        printf("N[%d] = %d\n",cont,x);
         
        // incrementando o x
        x++;
    }
  
    return 0;
}