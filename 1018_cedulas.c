#include <stdio.h>
  
int main() {
     
    // 
    int N;
    int C100 = 0,C50 = 0,C20 = 0,C10 = 0,C5 = 0,C2 = 0, C1 = 0;
     
    // 
    scanf ("%d",&N);
     
    // 
    printf("%d\n",N);
     
    // 
    while (N>0 && N<1000000) {
            if ((N - 100) >= 0) {
             
                N -= 100; 
                C100++;  
   
            } else if ((N - 50) >= 0) {  
                N -= 50;  
                C50++;  
            } else if ((N- 20) >= 0) {  
                N -= 20;  
                C20++;  
            } else if ((N - 10) >= 0) {  
                N -= 10;  
                C10++;  
            } else if ((N - 5) >= 0) {  
                N -= 5;  
                C5++;  
            } else if ((N- 2) >= 0) {  
                N -= 2;  
                C2++; 
            } else if ((N - 1) >= 0) {  
                N -= 1;  
                C1++; 
            }
             
    }
     
    //           
    printf("%d nota(s) de R$ 100,00\n",C100);
    printf("%d nota(s) de R$ 50,00\n",C50);
    printf("%d nota(s) de R$ 20,00\n",C20);
    printf("%d nota(s) de R$ 10,00\n",C10);
    printf("%d nota(s) de R$ 5,00\n",C5);
    printf("%d nota(s) de R$ 2,00\n",C2);
    printf("%d nota(s) de R$ 1,00\n",C1);
     
    // 
    return 0;
}