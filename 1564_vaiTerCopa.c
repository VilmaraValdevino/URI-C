#include <stdio.h>
 
int main () {
     
    //Declarando variáveis.
    int N;
     
    // Iniciando meu laço de repetição pedindo para escanear minha variavel N e usando o EOF para a confição quanto for diferente da minha variável , sendo que o
    // EOF é uma função testadora sendo utilizada para não acontecer erros sempre posicionando uma saída falsa até chagar ao final do arquivo.
    while(scanf("%d", &N) != EOF)
    {
         
        // Se minha variavel for um valor que determine que não há reclamações então fará o próximo passo.                          
        if(N==0)
        { 
            // após o passoa anterior ser afirmado como verdadeiro agora o programa irá imprimir em tela a mensagem "Vai ter copa!"
            printf("vai ter copa!\n");
        }
        // Senão caso minha condição anterior seja falsa meu programa simplesmente vai para o passo de impressão na tela de uma mensagem diferente que no caso seria "Vai ter duas!"
        else{
             printf("vai ter duas!\n");
            }
    }
    return 0;
}