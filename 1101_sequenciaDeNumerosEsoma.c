#include <stdio.h>
 
int main () {
     
    // Declarando vari�veis
    int m,n,maior,menor,x,soma = 0;
     
    // armazenando vari�veis
    scanf("%d %d", &m, &n);
     
    // enquanto m for maior que 0 e n tamb�m for maior que 0 fa�a a condi��o...
    while(m>0 && n>0)
    {
            
           // Se m for maior ou igual a N ... 
           if(m >= n)
           {
                 
                 // armazena o valor do maior numero na variavel m e o valor do menor numero na variavel n 
                 maior = m;
                 menor = n;
                  
                  
           } 
           // Sen�o... 
           else
           {
                // Armazena o valor do maior n�mero em N e o valor do menor numero em M 
                maior = n;
                menor = m;
           }
            
           // contador X recebe a menor variavel e enquanto o contador x for menor ou igual � menor vari�vel , incremento de contador x++; e prossiga com a condi��o...
           for(x = menor; x<= maior;x++)
           {
              // soma receber� soma + a variavel x.                    
              soma = soma+x;
              // Impress�o na tela do que cont�m a variavel X
              printf("%d ",x);
                             
           }
              // Impress�o na tela da soma dos valores. 
              printf("Sum=%d\n",soma);
               
              // Armazenamento das variav�is m e n
              scanf("%d %d",&m,&n);
               
              // reinicializando a soma para novos testes.
              soma = 0;
    }  
    // 
    return 0;
}