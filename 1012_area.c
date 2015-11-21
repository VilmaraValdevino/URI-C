#include <stdio.h>
  
int main() {
  
    // 
    double A, B, C,pi = 3.14159;
     
    // 
    scanf ("%lf",&A);
    scanf ("%lf",&B);
    scanf ("%lf",&C);
     
    // 
    printf ("TRIANGULO: %.3lf", (A * C)/2);
    printf ("\nCIRCULO: %.3lf", pi * (pow(C, 2)) );
    printf ("\nTRAPEZIO: %.3lf", C * (A + B)/2);
    printf ("\nQUADRADO: %.3lf", pow(B, 2));
    printf ("\nRETANGULO: %.3lf\n", B * A);
     
    // 
    return 0;
}