#include<stdio.h>

int main(){
  int Combinaciones = 0;

  for(int x = 0;x <= 87 / 19;x++){
    for(int y = 0;y <= (87 - 19 * x) / 7;y++){
      for(int z = 0;z <= (87 - 19 * x - y * 7) / 5;z++){
        if(x * 19 + y * 7 + z *5 == 87){
          Combinaciones++;
          printf("5 Soles: %d 7 Soles: %d 19 Soles: %d\n", x, y, z);
        }
      }
    }
  }
  printf("Cantidad de Soluciones: %d\n", Combinaciones);
}
