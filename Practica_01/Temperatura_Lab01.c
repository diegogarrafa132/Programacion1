#include<stdio.h>

int main(){
  int C;
  float F;
  printf("Temperatura en Celsius: ");
  scanf("%d", &C);
  F=(9.0/5.0)*C+32;
  printf("Temperatura en Fahrenheit: %0.2f\n", F);
}
