#include<stdio.h>

#define size(arr) (sizeof(arr) / sizeof(arr[0]))
#define encontar(arr, x) (find(arr, size(arr), x))
#define contar(arr, x) (count(arr, size(arr), x))
#define Test(fun, arr, x) printf("%s(%s, %zu, %d) --> %d\n", #fun, #arr, size(arr), x, fun(arr, x))
int find(const int a[], int n, int x){
  for(int i = 0;i < n;i++){
    if(a[i] == x){
      return i;
    }
  }
  return -1;
}
int count(const int a[], int n, int x){
  int contador = 0;
  for(int i = 0; i < n;i++){
    if(a[i] == x){
      contador++;
    }
  }
  return contador;
}

int main(){
  int a[] = {8, 3, 5, 3, 9};

  Test(encontar, a, 3);
  Test(encontar, a, 8);
  Test(encontar, a, 9);
  Test(encontar, a, 7);
  Test(contar, a, 3);
  Test(contar, a, 7);
}

