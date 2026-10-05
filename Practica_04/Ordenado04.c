#include<stdio.h>

#define size(arr) (sizeof(arr) / sizeof(arr[0]))
#define ordenado(arr) (IsSorted(arr, size(arr)))
#define PrimeraInversion(arr) (firstInversion(arr, size(arr)))
#define imprimir(arr) (mostrar(arr, size(arr)))
#define Test(fun, arr) imprimir(arr); printf(" -> %d \n", fun(arr))
void mostrar(const int arr[], int n){
  printf("{");
  for(int i = 0; i < n;i++){
    printf("%d", arr[i]);
  }
  printf("}");
}

int IsSorted(const int arr[], int n){
  for(int i = 0; i < n - 1;i++){
    if(arr[i] > arr[i + 1]){
      return 0;
    }
  }
  return 1; 
}
int firstInversion(const int arr[], int n){
  for(int i = 0; i < n - 1;i++){
    if(arr[i] > arr[i + 1]){
      return i;
    }
  }
  return -1;
}
int main(){
  int a[] = {1, 2, 3, 4};
  int b[] = {4, 3, 2, 1};
  int c[] = {1, 3, 2, 4};
  int d[] = {1, 1, 2, 2};
  int e[] = {7};
  int f[] = {1, 3, 2, 4};

  Test(ordenado, a);
  Test(ordenado, d);
  Test(ordenado, b);
  Test(ordenado, f);
  Test(ordenado, e);
  Test(PrimeraInversion, f);
  Test(PrimeraInversion, b);
  Test(PrimeraInversion, a);
}

