#include<stdio.h>

int isPrime(int);

int isPrime(int);

int main(){
  int n, q;
  scanf("%d", &n);
  for(int p = 2;p < n;p++){
    if(isPrime(p) == 1){
      q = n - p;
      if(q >= p && isPrime(q) == 1 && p + q == n)
        printf("%d + %d\n", p, q);
    }
  }
}

int isPrime(int n){
  if(n <= 1) return 0;
  for(int i = 2;i < n;i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
 
}
