#include <stdio.h>
 
int main( )
{
  int numero, nDivisor=1, numTeste, cont = 0, acum = 0;  // Declaracao de variaveis
    
  // digite um numero de teste e o programa ir� armazenar na vari�vel numTeste
  scanf("%d", &numTeste);
     
   // Enquanto o contador for menor ou igual ao numTeste digitado pelo usu�ario ele vai fazer a condi��o
   for (cont=1; cont<=numTeste; cont++)
   {
         // Se minha variavel numTeste for maior ou igual � 1 e tamb�m for menor e igual � 10 elevado � s�tima., continue o processamento... 
         if(numTeste>=1 && numTeste<=10^7)
         {
             // Digite o numero e o programa ir� armazenar na vari�vel numero
             scanf ("%d", &numero);
          
             // Inicia uma estrutura de repeti��o com o la�o For usando um numeroDivisor como contador para determinar se o mesmo � menor ou igual ao n�mero digitado    
             for (nDivisor=1; nDivisor<=numero; nDivisor++)
             {
                 // Se o  resto da divis�o de numero pelo numero Divisor for igual � 0....
                 if (numero % nDivisor==0)   
                 {
                 //armazenar isso no meu acumulador. 
                 acum++;     
                 }
             // fecha o la�o for
             }
  
              // quando o resto da minha divis�o que ser� armazenado no meu acumulador for igual � 2 me resultara em um n�mero primo     
              if(acum==2)
              { 
                    // Imprimir o resultado na tela de que o numero � primo caso o acumulador seja 2 !
                    printf("%d eh primo\n", numero);
                     
                    // reiniciando o acumulador para verifica��o do pr�ximo n�mero
                    acum=0;
              }
              // se o acumualdor for algo diferente de 2 ent�o o n�mero n�o ser� primo 
              else
              { 
                    // Imprimir em tela que o nu�mero n�o � primo  para caso de meu acumulador ser algo diferente de 2
                    printf("%d nao eh primo\n", numero);
                     
                    // reiniciando o acumulador para verifica��o do pr�ximo n�mero
                    acum=0;
              }
         // fecha o If da condi��o "numTeste>=1 && numTeste<=10^7"
         }
 
  // fecha meu la�o FOR
  }
   
  // 
  return 0;
   
}