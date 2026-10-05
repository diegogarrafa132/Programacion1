#include<stdio.h>

int main(){
  int X, Y;
  printf("Ingrese las coordenadas: ");
  scanf("%d %d", &X, &Y);

  if(X == 0 && Y == 0)
    printf("El punto esta en el Origen\n");
  else if(Y == 0)
    printf("Esta sobre el eje X\n");
  else if(X == 0)
    printf("Esta sobre el eje Y\n");
  else{
    if(0 < X && 0 < Y)
      printf("Esta en el primer cuadrante\n");
    else if(0 > X && 0 < Y)
      printf("Esta en el segundo cuadrante\n");
    else if(0 > X && 0 > Y)
      printf("Esta en el tercer cuadrante\n");
    else
      printf("Esta en el cuarto cuadrante\n");
  }
}
