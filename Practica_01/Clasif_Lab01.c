#include<stdio.h>

int main(){
  float D, G;

  printf("Ingrese el diametro la llanta del vehiculo: ");
  scanf("%f", &D);
  printf("Ingrese el grosor de la llanta del vehivulo: ");
  scanf("%f", &G);
  if(D > 1.4)
    printf("Vehiculo Grande\n");
  else if(D > 0.8)
    printf("Veliculo Mediano\n");
  else
    printf("Veliculo Pequeño\n");

  if((D > 1.4 && G < 0.4) || (0.8 < D && D <= 1.4 && G < 0.25))
    printf("El grosor para esta rueda es inferior al recomendado\n");
}
