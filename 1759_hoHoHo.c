#include <stdio.h>
  
int main() {
   
   int num, cont = 0;
      
    scanf("%d",&num);
      
    for(cont;cont<num;cont++){
          
        printf("Ho");
          
        if(cont < num-1){
              
            printf(" ");
              
        }
          
    }
     printf("!\n");
      
    return 0;
}