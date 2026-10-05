#include<stdio.h>

int isCommonDivisor(int, int, int);
int main(){
  int A, B, D;
  scanf("%d %d %d", &A, &B, &D);
  printf("%d\n", isCommonDivisor(A, B, D));
}

int isCommonDivisor(int d, int a, int b){
  return a % d == 0 && b % d == 0;
}
