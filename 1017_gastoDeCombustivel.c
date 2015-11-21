#include <stdio.h>
  
int main() {
  
      // 
      double carro = 12;
      double km,horas,litros;
       
      // 
      scanf ("%lf", &horas);
      scanf ("%lf", &km);
       
      // 
      litros = (km*horas)/carro;
       
      // 
      printf("%.3lf\n",litros);
       
      // 
      return 0;
}