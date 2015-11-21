#include <stdio.h>
#include <string.h>
 
int main ()
 
{
    // Definindo a cor do plano de fundo e fonte
    system("color db");
     
    // Declarando variavéis
    int N,cont,contt,xa,xb,acumulador=0;
    char A[1000], B[1000];
     
    // Armazenado a quantidade de testes desejada pelo usuário
    scanf("%d", &N);
     
    // enquanto cont for menor que a quantidade de testes solicitada faça
    for (cont = 0; cont < N ; cont++)
    {
        // Leia o valor digitado de A e de B.
        scanf ("%s", A);
        scanf ("%s", B);
         
        // variavel xa recebe atraves do strlen a quantidade de caracteres na vaiavel A
        xa = strlen(A);
         
        // variavel xa recebe atraves do strlen a quantidade de caracteres na vaiavel B
        xb = strlen(B);
         
    // enquanto contt for menor que xb "quantidade de caracteres da variavel B" 
    for (contt=0;contt<xb;contt++)
    {
        // nesta condição no caso de A[sendo a posição a quantidade de caracteres de a menos a quantidade de caracteres de b] for igual à posição de B direcionada pelo contador faça a seguinte instrução....
        if (A[xa-xb] == B[contt])
        {
            // se for verdadeiro para todas as posições adicionar mais 1 ao acumulador.
            acumulador++;
        }
        // incrementa o xa
        xa++;
    }
        // Se acumulador for igual a quantidade de caracteres de B faça...
        if(acumulador==xb)
        {
            // impressão de tela que encaixa!
            printf("encaixa\n");
        }
        // Senão....
        else
        {
            // impressão de tela que não encaixa!
            printf("nao encaixa\n");
        }
         
        // reiniciando o acumulador para os próximos testes.
        acumulador=0;
    }
     
    // 
    return 0;
}