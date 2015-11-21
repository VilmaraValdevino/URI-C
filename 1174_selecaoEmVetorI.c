#include <stdio.h>
  
int main() {
  
      float A[100];
      int cont=0;
       
      for (cont=0;cont<100;cont++)
      {
            scanf ("%f",& A[cont]);
             
            if(A[cont]<=10)
            {
                printf("A[%d] = %.1f\n",cont,A[cont]);
            }
      }
    return 0;
}