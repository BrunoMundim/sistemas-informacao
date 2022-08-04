#include <stdio.h>
 
int main() {
  int N, X, flag = 1;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &X);
    for(int j = 2; j < X; j++){
      if(X % j == 0){
        flag = 0;
        break;
      }
    }
    if(flag == 0)
      printf("%d nao eh primo\n", X);
    else
      printf("%d eh primo\n", X);
    flag = 1;
  }  

  return 0;
}