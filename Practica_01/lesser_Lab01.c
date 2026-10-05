#include<stdio.h>

int main(){
  int a, b, c, menor;
  printf("Ingrese tres numeros: ");
  scanf("%d %d %d", &a, &b, &c);
  menor = a;
  if(menor>b) menor = b;
  if(menor>c) menor = c;

  printf("El menor es: %d\n", menor);
}
