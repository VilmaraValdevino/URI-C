#include <stdio.h>
#include <string.h>
 
int main ()
 
{
    // Definindo a cor do plano de fundo e fonte
    system("color db");
     
    // Declarando variav�is
    int N,cont,contt,xa,xb,acumulador=0;
    char A[1000], B[1000];
     
    // Armazenado a quantidade de testes desejada pelo usu�rio
    scanf("%d", &N);
     
    // enquanto cont for menor que a quantidade de testes solicitada fa�a
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
        // nesta condi��o no caso de A[sendo a posi��o a quantidade de caracteres de a menos a quantidade de caracteres de b] for igual � posi��o de B direcionada pelo contador fa�a a seguinte instru��o....
        if (A[xa-xb] == B[contt])
        {
            // se for verdadeiro para todas as posi��es adicionar mais 1 ao acumulador.
            acumulador++;
        }
        // incrementa o xa
        xa++;
    }
        // Se acumulador for igual a quantidade de caracteres de B fa�a...
        if(acumulador==xb)
        {
            // impress�o de tela que encaixa!
            printf("encaixa\n");
        }
        // Sen�o....
        else
        {
            // impress�o de tela que n�o encaixa!
            printf("nao encaixa\n");
        }
         
        // reiniciando o acumulador para os pr�ximos testes.
        acumulador=0;
    }
     
    // 
    return 0;
}