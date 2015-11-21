#include <stdio.h>
  
int main() {
  
      //  
      int N; 
      int hora,minuto,segundo;
       
      //  
      scanf("%d",&N);
       
      //  
      hora = (N /3600); 
      minuto = (N-( 3600 * hora)) / 60;
      segundo = (N - (3600 * hora)) - (minuto * 60);
       
      // 
      printf("%d:%d:%d\n",hora,minuto,segundo);
       
      //  
      return 0;
}