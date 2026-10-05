#include<stdio.h>

int sumProperDivisors(int);

int areAmicable(int, int);

int main(){
  int n = 300;

  for(int a = 2; a < n;a++){
    for(int b = a; b <= n;b++){
      if(a < b && b <= n){
        if(areAmicable(a, b)){
          printf("%d %d\n", a, b);
        }
      }
    }
  }
}

int sumProperDivisors(int n){
  int sum = 0;
  for(int i = 1;i <= n;i++){
    if(n % i == 0){
      sum += i;
    }
  }
  return sum;
}

int areAmicable(int a, int b){
  return sumProperDivisors(a) ==  sumProperDivisors(b);
}
