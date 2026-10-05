#include<stdio.h>

int main(){
  int a;
  int invalid = 0;
  printf("Valor [1..5]: ");
  scanf("%d", &a);
  while(!(1 <= a && a <= 5)){
    printf("Valor no valido.\n");
    printf("Valor [1..5]: ");
    scanf("%d", &a);
    invalid++;
  }
  printf("Valor valido.\n");
  printf("Intentos invalidos: %d\n", invalid);

}

