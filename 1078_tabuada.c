#include <stdio.h>
  
int main() {
  
    // 
    int N,cont=1; 
     
    // 
    scanf ("%d",&N);
     
    // 
    while (cont<=10)
    {
        printf("%d x %d = %d\n", cont,N,N*cont);
        cont++;
    }
     
    // 
    return 0;
}