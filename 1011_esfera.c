#include <stdio.h>
  
int main() {
  
    // 
    int raio;
    double volume,pi = 3.14159;
      
    //  
    scanf("%d",&raio);
     
    //  
    volume = ( (4/3.0) * (pi) * ( pow(raio,3) ) );
      
    //   
    printf("VOLUME = %.3lf\n",volume);
  
    // 
    return 0;
}