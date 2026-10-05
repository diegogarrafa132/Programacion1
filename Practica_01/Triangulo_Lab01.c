#include<stdio.h>

int main(){
  int a, b, c;
  printf("Lados: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a + b > c && a + c > b && c + b > a){
    printf("EL triangulo existe\n");
    if(a == b && a == c && b == c)
      printf("Es equilatero\n");
    else if(a == b || a == c || b == c)
      printf("Es isoceles\n");
    else
      printf("Es escaleno\n");
    if(a * a == b * b + c * c || b * b == c * c + a * a
        || c * c == b * b + a * a){
      printf("Es un Triangulo Rectangulo\n");
    }
  }
  else
    printf("El triangulo no existe\n");
}
