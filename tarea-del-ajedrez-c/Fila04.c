#include "chess.h"
#include "figures.h"

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(whiteSquare, blackSquare);
  char** cuatro_casillas = repeatH(pair, 2);
  char** Fila = repeatH(cuatro_casillas, 2);  
  interpreter(Fila);
}
