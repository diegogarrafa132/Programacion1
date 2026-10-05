#include<stdio.h>
#include<math.h>
int QuitarFacDeDiez(int n){
  int res2 = n % 2;
  int res5 = n % 5;

  while((res2 == 0 || res5 == 0) && (n != 2 ||  n != 5)){
    if(res2 == 0){
      n = n / 2;
    }
    if(res5 == 0){
      n = n / 5;
    }
    res2 = n % 2;
    res5 = n % 5;
  }
  return n;
}

int elevar(int b, int e){
  if(e == 0){
    return 1;
  }else{
    return b * elevar(b, e - 1);
  }
}

int LongitudPeriod(int n){
  int res = 0;
  int contador = 0;
  
  while(res != 1){
    contador++;
    
    res =  elevar(10, contador) % n;
  }
  return contador;

}

int main(){
  int n;
  printf("1 / n : Ingrese n:");
  scanf("%d", &n);
  int denominador = QuitarFacDeDiez(n);

  if(denominador == 0){
    printf("Longitud: 0\n");
  }else{
    printf("Longitud: %d\n", LongitudPeriod(denominador));
  }
} 
