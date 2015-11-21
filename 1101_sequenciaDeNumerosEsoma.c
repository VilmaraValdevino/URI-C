#include <stdio.h>
 
int main () {
     
    // Declarando variáveis
    int m,n,maior,menor,x,soma = 0;
     
    // armazenando variáveis
    scanf("%d %d", &m, &n);
     
    // enquanto m for maior que 0 e n também for maior que 0 faça a condição...
    while(m>0 && n>0)
    {
            
           // Se m for maior ou igual a N ... 
           if(m >= n)
           {
                 
                 // armazena o valor do maior numero na variavel m e o valor do menor numero na variavel n 
                 maior = m;
                 menor = n;
                  
                  
           } 
           // Senão... 
           else
           {
                // Armazena o valor do maior número em N e o valor do menor numero em M 
                maior = n;
                menor = m;
           }
            
           // contador X recebe a menor variavel e enquanto o contador x for menor ou igual à menor variável , incremento de contador x++; e prossiga com a condição...
           for(x = menor; x<= maior;x++)
           {
              // soma receberá soma + a variavel x.                    
              soma = soma+x;
              // Impressão na tela do que contém a variavel X
              printf("%d ",x);
                             
           }
              // Impressão na tela da soma dos valores. 
              printf("Sum=%d\n",soma);
               
              // Armazenamento das variavéis m e n
              scanf("%d %d",&m,&n);
               
              // reinicializando a soma para novos testes.
              soma = 0;
    }  
    // 
    return 0;
}