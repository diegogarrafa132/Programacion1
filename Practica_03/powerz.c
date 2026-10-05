#include<stdio.h>

double power(double, int);

int main(){
  int n;
  double x;
  scanf("%lf %d", &x, &n);
  printf("%lf\n", power(x, n));

}

double power(double x, int n){
  double p = 1;
  int neg = n < 0;
  n = (n < 0)? - n:n;

  for(int i = 0; i < n;i++){
    p = p * x;
  }

  if(neg == 1){
    p = 1 / p;
  }

  return p;
}
