#include <stdio.h>
  
int main() {
  
    // 
    int A, C, B, D, minutos, tempo;
     
    // 
    scanf("%d %d %d %d", &A, &C, &B, &D);
     
    // 
    tempo = B - A;
     
    // 
    if (tempo < 0)
    {
        tempo = 24 + (B - A);
    }
    minutos = D - C;
     
    // 
    if (minutos < 0)
    {
        minutos = 60 + (D - C);
        tempo--;
    }
    if (B == A && D == C)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo, minutos);
     
    //  
    return 0;
}