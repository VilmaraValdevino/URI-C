#include <stdio.h>
#define limite 12//definindo o tamanho da matriz
  
int main() {
  
      int linha,coluna,c,cont=0;
      float M[limite][limite],S=0;
      char T;
       
      scanf("%d",&c);//leitura do valor correspondente a coluna da matriz cujo a soma ou media será feita
      scanf(" %c",&T);//Leitura do caractere de escolha entre Soma ou media.
 
      for(linha=0;linha<limite;linha++)//for correspondente ao loop da quantidade de linhas definidas em "limite"
      {
            for (coluna=0;coluna<limite;coluna++)//for correspondente ao loop da quantidade de colunas definidas em "limite"
            {
             scanf("%f",&M[linha][coluna]);//leitura dos valores para todos os espaços da matriz
            }
      }
       
      while(cont<limite)//while responsável por armazenar a soma de todos os valores referente a coluna informada pelo usuario (na variavel c)
      {
      S+=M[cont][c];// Atribui o valor correspondente a posição da matriz na variavel S
      cont++;
      }
       
      if(T=='S' || T=='s')//se T for igual a S ou s faça
      {
      printf("%.1f\n",S);
      }
       
      if(T=='M' || T=='m')//se T for igual a M ou m faça
      {
      printf("%.1f\n",S/limite);
      }
 
  
    return 0;
}