#include<stdio.h>

int main(){
  int a;
  int sum = 0;
  int max;
  int min;
  int count = 0;

  scanf("%d", &a);

  if(a != 0){
    max = a;
    min = a;
  }
  while(a != 0){
    if(a < min){
      min = a;
    }
    if(a > max){
      max = a;
    }
    sum += a;
    scanf("%d", &a);
    count++;
  }

  printf("Numeros ingresados es: %d y su suma es: %d \n", count, sum);
  if(count != 0){
    printf("El maximo es: %d y el minimo es: %d\n", max, min);
  }

}


