#include <stdio.h>
  
int main() {
     
    //  
    int inicio,fim,tempo;
     
    //  
    scanf("%d %d", &inicio,&fim);
     
    //  
    tempo = fim - inicio;
     
    //  
    if (tempo < 0)
    {
        tempo = (fim - inicio) + 24;
    }
    if (inicio == fim)
    {   
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
 
    //  
    return 0;
}