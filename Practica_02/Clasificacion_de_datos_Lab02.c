#include<stdio.h>

int main(){
  int sum = 0;
  int n;
  int Positivos = 0;
  int Negativos = 0;
  int e;
  int ceros = 0;
  scanf("%d", &n);

  for(int i = 0;i < n; i++){
    scanf("%d", &e);
    if(e == 0){
      ceros++;
    }
    else if(e > 0){
      Positivos++;
    }
    else{
      Negativos++;
    }
    sum = sum + e;
  }

  printf("sum: %d\n", sum);
  printf("Pos: %d\n", Positivos);
  printf("Nen: %d\n", Negativos);
  printf("Ceros: %d\n", ceros);

}
