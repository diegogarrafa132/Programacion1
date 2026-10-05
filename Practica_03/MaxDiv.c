#include<stdio.h>

int gdc(int, int);

int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  printf("%d\n", gdc(A, B));
}

int gdc(int a, int b){
  int r = a % b;

  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}
