#include<stdio.h>
#define size(arr)  (sizeof(arr) / sizeof(arr[0]))
#define min(arr) (MinValue(arr, size(arr)))
#define max(arr) (MaxValue(arr, size(arr)))
#define promedio(arr) (average(arr, size(arr)))
#define Test(arr, fun) printf(" %s (%s, %zu) -> %d\n", #fun, #arr, size(arr), fun(arr));
#define TestF(arr, fun) printf(" %s (%s, %zu) -> %f\n", #fun, #arr, size(arr), fun(arr));
int MinValue(const int a[], int n){
  int Min = a[0];

  for(int i = 0; i < n; i++){
    if(a[i] < Min){
      Min = a[i];
    }
  }
  return Min;
}

int MaxValue(const int a[], int n){
  int Max = a [0];
  for(int i = 0; i < n;i++){
    if(a[i] > Max){
      Max = a[i];
    }
  }
  return Max;
}

float average(const int a[], int n){
  float promedio = 0;
  for(int i = 0; i < n; i++){
    promedio += a[i];
  } 
  promedio = promedio/ n;
  return promedio;
}

int main(){
  int a[] = {4, 6, 2, 5, 7};
  int b[] = {7};
  int c[] = {-8, -3, -10};
  int d[] = {0, 0, 0, 0};
  int e[] = {5, -5, 5, -5};

  Test(a, min);
  Test(b, min);
  Test(c, min);
  Test(d, min);
  Test(e, min);
  printf("\n"); 
  Test(a, max);
  Test(b, max);
  Test(c, max);
  Test(d, max);
  Test(e, max);
  printf("\n");
  TestF(a, promedio);
  TestF(b, promedio);
  TestF(c, promedio);
  TestF(d, promedio);
  TestF(e, promedio);



}
