#include <stdio.h>
 
int main () {
     
    //Declarando vari�veis.
    int N;
     
    // Iniciando meu la�o de repeti��o pedindo para escanear minha variavel N e usando o EOF para a confi��o quanto for diferente da minha vari�vel , sendo que o
    // EOF � uma fun��o testadora sendo utilizada para n�o acontecer erros sempre posicionando uma sa�da falsa at� chagar ao final do arquivo.
    while(scanf("%d", &N) != EOF)
    {
         
        // Se minha variavel for um valor que determine que n�o h� reclama��es ent�o far� o pr�ximo passo.                          
        if(N==0)
        { 
            // ap�s o passoa anterior ser afirmado como verdadeiro agora o programa ir� imprimir em tela a mensagem "Vai ter copa!"
            printf("vai ter copa!\n");
        }
        // Sen�o caso minha condi��o anterior seja falsa meu programa simplesmente vai para o passo de impress�o na tela de uma mensagem diferente que no caso seria "Vai ter duas!"
        else{
             printf("vai ter duas!\n");
            }
    }
    return 0;
}