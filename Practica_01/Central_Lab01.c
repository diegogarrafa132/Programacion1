#include<stdio.h>

int main(){
  int a, b, c, menor, mayor, central;
  printf("Ingrese tres numeros: ");
  scanf("%d %d %d", &a, &b, &c);

  menor = a;
  mayor = a;
  if(menor > b){
    menor =  b;
  }
  if(menor > c){
    menor = c;
  }
  if(mayor < b){
    mayor = b;
  }
  if(mayor < c){
    mayor = c;
  }

  central = a + b + c - menor - mayor;
  printf("El valor central es: %d\n", central);
}
