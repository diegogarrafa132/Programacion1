#include<stdio.h>

int main(){
  int n;
  int count = 0;

  printf("Numero: ");
  scanf("%d", &n);

  if(n > 1){
    printf("Divisores: ");
    for(int i = 1; i <= n;i++){
      if(n % i == 0){
        printf("%d ", i);
        count++;
      }
    }
    printf("\n");
    printf("Cantidad de divisores: %d\n", count);
    if(count <= 2){
      printf("%d es primo\n", n);
    }else{
      printf("%d no es primo\n", n);
    }
  }else{
    printf("Entrada no valida\n");
  }

}
