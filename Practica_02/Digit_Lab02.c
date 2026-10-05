#include<stdio.h>

int main(){
  int n;
  int count = 0;
  int inver = 0;
  int digit = 0;

  printf("Numero: ");
  scanf("%d", &n);

  int e = n;
  int num = n;

  while(e != 0){
    e = e / 10;
    count++;
  }

  for(int i = 0;i < count;i++){
    digit = n % 10;
    inver = inver * 10 + digit;
    n = n / 10;
  }

  printf("Invertido: %d\n", inver);

  if(num == inver){
    printf("Es palindromo\n");
  }else{
    printf("No es palindromo\n");
  }
}
