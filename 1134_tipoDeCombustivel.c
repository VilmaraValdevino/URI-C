#include <stdio.h>
 
int main() 
{
    // Deeclarando vari�veis
    int opcao, gasolina=0, diesel=0, alcool=0;
 
    // armazenando a op��o escolhida pelo usu�rio
    scanf ("%d", &opcao);
 
    // Fa�a testando pelo menos uma vez  a condi��o 
    do{
    // armazenando a op��o escolhida pelo usu�rio
    scanf ("%d", &opcao);
 
   // Se a escolha for op��o 1 armazenar em alcool.
   if (opcao == 1){
   alcool++;
   }// Sen�o se a op��o for 2 armazenar em gasolina
   else{
   if (opcao == 2){
   gasolina++;
   }
   // Sen�o se a op��o for 3 armazenar em diesel
   else{
   if (opcao == 3){
   diesel++;
   }
   }
   }
    
   }// Enquanto a op��o for diferente de 4
   while (opcao != 4);
 
     // imprimir em tela as seguintes mensagens...
     printf ("MUITO OBRIGADO\n");
     printf ("Alcool: %d\n", alcool);
     printf ("Gasolina: %d\n", gasolina);
     printf ("Diesel: %d\n", diesel);
 
    // 
    return 0;
}