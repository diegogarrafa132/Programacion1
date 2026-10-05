#include "chess.h"
#include "figures.h"

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(whiteSquare, blackSquare);
  char** cuatro_casillas = repeatH(pair, 2);
  
  interpreter(cuatro_casillas);
}
