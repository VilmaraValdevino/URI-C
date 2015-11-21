#include <stdio.h>
#define limite 12
  
int main() {
  
      int linha,coluna,n,cont=0;
      float M[limite][limite],S=0;
      char T;
       
      scanf("%d",&n);
      scanf(" %c",&T);
 
       
      for(linha=0;linha<limite;linha++)
      {
                                        
            for (coluna=0;coluna<limite;coluna++)
            {
                scanf("%f",&M[linha][coluna]);
            }
      }
       
      while(cont<limite)
      {
      S+=M[n][cont];
      cont++;
      }
       
      if(T=='S' || T=='s')
      {
      printf("%.1f\n",S);
      }
       
      if(T=='M' || T=='m')
      {
      printf("%.1f\n",S/limite);
      }
  
    return 0;
}