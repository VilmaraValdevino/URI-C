#include <stdio.h>
  
int main() {
  
      //  
      int cod,quant;
      double total;
       
      //  
      scanf("%d",&cod);
      scanf("%d",&quant);
       
      //  
      if ( cod == 1 )
      {
           total = quant*4.00;     
      }
      else if ( cod == 2 )
      {
           total = quant*4.50;
      }
      else if ( cod == 3 )
      {
           total = quant*5.00;     
      }
      else if ( cod == 4 )
      {
           total = quant*2.00;      
      }
      else if ( cod == 5 )
      {
           total = quant*1.50;
      }
       
      //   
      printf("Total: R$ %.2lf\n",total);
       
      //   
      return 0;
}