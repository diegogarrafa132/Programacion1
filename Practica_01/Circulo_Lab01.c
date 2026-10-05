#include<stdio.h>
#include<math.h>

int main(){
  float X, Y, R;
  printf("X: ");
  scanf("%f", &X);
  printf("Y: ");
  scanf("%f", &Y);
  printf("R: ");
  scanf("%f", &R);

  if(X * X + Y * Y < R * R)
    printf("El punto esta sobre la circunferencia\n");

  else if(X * X + Y * Y > R * R)
    printf("El punto esta fuera de la circunferencias\n");
  else
    printf("El punto forma parte de la circunferencia\n");
}
