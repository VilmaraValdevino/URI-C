#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    // Declarando variav�is sendo que N � o numero de testes, cont e para rodar o escaneamento das nLinhas, contt � para rodar o processamento dos valores do vetor, acum pe �ra acumular e somar os valores de cada caractere informado, x � para receber as posi��es de caractere da nLinhas.
    int N,cont, contt, acum = 0,x;
    char nLinhas[1000];
     
    // Definindo cor do plano de fundo de fonte 
    system("color db");
     
    // armazenando a quantidade de testes solicitadas pelo usu�rio
    scanf("%d", &N); 
     
    // enquanto cont for menor que a quantidade de teste solicitada pelo usu�rio fa�a o processamento
    for (cont = 0 ; cont < N ; cont ++)
    {
        // armazenando nLinhas
        scanf("%s", nLinhas);
         
        // x recebendo a quantidade de caracteres em nLinhas atrav�s de strlen
        x = strlen(nLinhas);
         
        // Segundo la�o de repeti��o para que contt rode enquanto for menor que x  a verifique todas as posi��es do vetor e compare com o caractere informado 
        for(contt=0;contt<x;contt++)
        {
         
            if ( nLinhas[contt] == '0')
            {
                acum += 6;
            }
            if ( nLinhas[contt] == '1')
            {
                acum += 2;
            }
            if ( nLinhas[contt] == '2')
            {
                acum += 5;
            } 
            if (nLinhas[contt] == '3')
            {
                acum += 5;
            }
            if ( nLinhas[contt] == '4')
            {
                acum += 4;
            } 
            if (nLinhas[contt] == '5')
            {
                acum += 5;
            }
            if ( nLinhas[contt] == '6')
            {
                acum += 6;
            }
            if ( nLinhas[contt] == '7')
            {
                acum += 3;
            } 
            if (nLinhas[contt] == '8')
            {
                acum += 7;
            }
            if ( nLinhas[contt] == '9')
            {
                acum += 6;
            }
    }
            printf("%d leds\n", acum);
             
            // reiniciando o acumulador para novos testes.
            acum=0;
         
         
    }
     
    // 
    return 0;
}