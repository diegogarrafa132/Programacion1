#include<stdio.h>

int main(){
  int C = 100;
  int S;
  int n_camiones = 0;
  int Peso = 0;
  int Peso_Total = 0;

  scanf("%d", &S);
  if(S != 0){
    n_camiones++;
    Peso = S;
    Peso_Total = S;
    printf("Camion %d: carga %d,", n_camiones, Peso);
    printf("espacio libre %d\n", C - Peso);
  }

  while(S != 0){
    scanf("%d", &S);
    Peso +=S;
    if(C - Peso > 0 && S != 0){
      Peso_Total += S;
      printf("Camion %d: carga %d,", n_camiones, Peso);
      printf("espacio libre %d\n", C - Peso);
    }else if(C - Peso < 0 && S != 0){
      n_camiones++;
      Peso = S;
      printf("Camion %d: carga %d,", n_camiones, Peso);
      printf("espacio libre %d\n", C - Peso);
      Peso_Total += S;
    }else if(C - Peso == 0 && S != 0){
      printf("Camion %d: carga %d,", n_camiones, Peso);
      printf("espacio libre %d\n", C - Peso);
      Peso_Total += S;
      n_camiones++;
      Peso = 0;
    }
  }

  printf("Camniones utilizados: %d\n", n_camiones);
  printf("Peso Total: %d\n", Peso_Total);
}

