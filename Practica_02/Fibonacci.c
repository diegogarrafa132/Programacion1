#include<stdio.h>

int main(){
  int L;
  int count = 1;
  int last = 0;
  int f1 = 0;
  int f2 = 1;
  scanf("%d", &L);
  printf("Secuencia: %d ", f1);
  while(last < L){
    f1 = f2;
    f2 = last;
    last= f1 + f2;
    printf("%d ", last);
    count++;

  }
  printf("Ultimo antes de exeder el limite");
  printf("\n");
  printf("Contador: %d\n", count);

}
