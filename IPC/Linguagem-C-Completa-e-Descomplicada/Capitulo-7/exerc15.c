#include <stdio.h>
#include <string.h>

int main()
{
  char str1[100], str2[100];
  printf("Digite a primeira frase: ");
  fgets(str1, 100, stdin);
  printf("Digite a segunda frase: ");
  fgets(str2, 100, stdin);
  
  int flag = 1;
  for(int i = 0; i < strlen(str1); i++){
    if (str1[i] >= 65 && str1[i] <= 90 && str2[i] >= 65 && str1[i] <= 90){
      if (str1[i] > str2[i]){
        printf("%s%s", str2, str1);
        flag = 0;
        break;
      }      
    }
    if (str1[i] >= 97 && str1[i] <= 122 && str2[i] >= 97 && str1[i] <= 122){
      if (str1[i] > str2[i]){
        printf("%s%s", str2, str1);
        flag = 0;
        break;
      }      
    }
    if (str2[i] >= 91 && str2[i] <= 96){
      if(str1[i] >= 97 && str1[i] <= 122 || str2[i] >= 65 && str1[i] <= 90){
        printf("%s%s", str2, str1);
        flag = 0;
        break;
      }      
    }
  }
  if(flag == 1)
    printf("%s%s", str1, str2);
  /* if (str1[0] >= 65 && str1[0] <= 90 && str2[0] >= 65 && str1[0] <= 90) {
    if (str1[0] > str2[0])
      printf("%s%s", str2, str1);
    else
      printf("%s%s", str1, str2);
  }
  else if (str1[0] >= 97 && str1[0] <= 122 && str2[0] >= 97 && str1[0] <= 122) {
    if (str1[0] > str2[0])
      printf("%s%s", str2, str1);
    else
      printf("%s%s", str1, str2);
  }
  else if (str1[0] >= 91 && str1[0] <= 96 && (str2[0] >= 97 && str2[0] <= 122 || str2[0] >= 65 && str2[0] <= 90))
      printf("%s%s", str1, str2);
    else if (str2[0] >= 91 && str2[0] <= 96 && (str1[0] >= 97 && str1[0] <= 122 || str2[0] >= 65 && str1[0] <= 90))
      printf("%s%s", str2, str1);
    else if ((str1[0] < 65 || str1[0] > 122) && (str2[0] >= 97 && str2[0] <= 122 || str2[0] >= 65 && str2[0] <= 90))
      printf("%s%s", str1, str2);
    else
      printf("%s%s", str2, str1);
  } else{
    printf("%s%s", str1, str2);
  } */
    

  return 0;
}