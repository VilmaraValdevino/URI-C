#include <stdio.h>
 
int main() 
{
    // Deeclarando variáveis
    int opcao, gasolina=0, diesel=0, alcool=0;
 
    // armazenando a opção escolhida pelo usuário
    scanf ("%d", &opcao);
 
    // Faça testando pelo menos uma vez  a condição 
    do{
    // armazenando a opção escolhida pelo usuário
    scanf ("%d", &opcao);
 
   // Se a escolha for opção 1 armazenar em alcool.
   if (opcao == 1){
   alcool++;
   }// Senão se a opção for 2 armazenar em gasolina
   else{
   if (opcao == 2){
   gasolina++;
   }
   // Senão se a opção for 3 armazenar em diesel
   else{
   if (opcao == 3){
   diesel++;
   }
   }
   }
    
   }// Enquanto a opção for diferente de 4
   while (opcao != 4);
 
     // imprimir em tela as seguintes mensagens...
     printf ("MUITO OBRIGADO\n");
     printf ("Alcool: %d\n", alcool);
     printf ("Gasolina: %d\n", gasolina);
     printf ("Diesel: %d\n", diesel);
 
    // 
    return 0;
}