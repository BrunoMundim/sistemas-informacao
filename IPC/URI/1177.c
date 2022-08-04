#include <stdio.h>
 
int main() {
  int T;
  scanf("%d", &T);
  int N[1000], cont = 0;
  for(int i = 0; i < 1000; i++){
    if(cont < T){
      N[i] = cont;
      cont++;    
    } else{
      cont = 0;
      N[i] = cont;
      cont++;     
    }
    printf("N[%d] = %d\n", i, N[i]);
  }

  return 0;
} 