#include <stdio.h>
 
int main( )
{
  int numero, nDivisor=1, numTeste, cont = 0, acum = 0;  // Declaracao de variaveis
    
  // digite um numero de teste e o programa irá armazenar na variável numTeste
  scanf("%d", &numTeste);
     
   // Enquanto o contador for menor ou igual ao numTeste digitado pelo usuáario ele vai fazer a condição
   for (cont=1; cont<=numTeste; cont++)
   {
         // Se minha variavel numTeste for maior ou igual à 1 e também for menor e igual à 10 elevado à sétima., continue o processamento... 
         if(numTeste>=1 && numTeste<=10^7)
         {
             // Digite o numero e o programa irá armazenar na variável numero
             scanf ("%d", &numero);
          
             // Inicia uma estrutura de repetição com o laço For usando um numeroDivisor como contador para determinar se o mesmo é menor ou igual ao número digitado    
             for (nDivisor=1; nDivisor<=numero; nDivisor++)
             {
                 // Se o  resto da divisão de numero pelo numero Divisor for igual à 0....
                 if (numero % nDivisor==0)   
                 {
                 //armazenar isso no meu acumulador. 
                 acum++;     
                 }
             // fecha o laço for
             }
  
              // quando o resto da minha divisão que será armazenado no meu acumulador for igual à 2 me resultara em um número primo     
              if(acum==2)
              { 
                    // Imprimir o resultado na tela de que o numero é primo caso o acumulador seja 2 !
                    printf("%d eh primo\n", numero);
                     
                    // reiniciando o acumulador para verificação do próximo número
                    acum=0;
              }
              // se o acumualdor for algo diferente de 2 então o número não será primo 
              else
              { 
                    // Imprimir em tela que o nuúmero não é primo  para caso de meu acumulador ser algo diferente de 2
                    printf("%d nao eh primo\n", numero);
                     
                    // reiniciando o acumulador para verificação do próximo número
                    acum=0;
              }
         // fecha o If da condição "numTeste>=1 && numTeste<=10^7"
         }
 
  // fecha meu laço FOR
  }
   
  // 
  return 0;
   
}