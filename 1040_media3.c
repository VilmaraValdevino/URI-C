#include <stdio.h>
  
int main() {
  
float n1, n2, n3, n4, MEDIA, NOTAEXAME, MEDIAFINAL;
     
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
     
    MEDIA = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %.1f\n",MEDIA);
     
    if(MEDIA>=7.0){
         
        printf("Aluno aprovado.\n");
         
    }else if(MEDIA<5.0){
         
            printf("Aluno reprovado.\n");   
             
    }else{
        printf("Aluno em exame.\n");
         
        scanf("%f", &NOTAEXAME);
         
        printf("Nota do exame: %.1f\n", NOTAEXAME);
         
        MEDIAFINAL =(NOTAEXAME+MEDIA)/2;
     
        if(MEDIAFINAL >= 5.0){
             
            printf("Aluno aprovado.\n");
             
            printf("Media final: %.1f\n", MEDIAFINAL);
             
        }else{
            printf("Aluno reprovado.\n");
             
            printf("Media final: %.1f\n",MEDIAFINAL);
        }   
    }
    return 0;
}