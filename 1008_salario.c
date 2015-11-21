#include <stdio.h>
  
int main() {
  
    // 
    int num,horasTrab;
    float valorHora,SALARY;
     
    //  
    scanf("%d",&num);
    scanf("%d",&horasTrab);
    scanf("%f",&valorHora);
     
    //  
    SALARY = (valorHora*horasTrab);
     
    //  
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,SALARY);
     
    return 0;
}