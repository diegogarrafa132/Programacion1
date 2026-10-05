#include<stdio.h>

int main(){
  int D, H, M, T;
  float C;
  printf("Dia: ");
  scanf("%d", &D);
  printf("Horas: ");
  scanf("%d", &H);
  printf("Minutos: ");
  scanf("%d", &M);

  if((1 <= D && D <= 7) && (0 <= H) && (0 <= M && M <= 59)){
    if(M > 5)
      H = H +1;

    if(1 <= D && D <= 3)
      T = 2.0;
    else if(D <= 5)
      T = 2.5;
    else
      T = 3.0;
    C = T * H;
    printf("Total a pagar: S/%6.2f\n", C);
  }
  else
    printf("Entrada no valida");
}
