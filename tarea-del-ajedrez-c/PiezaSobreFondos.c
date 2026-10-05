#include "chess.h"
#include "figures.h"

char** CasillaOcupada(char** pieza, char** fondo){
  return superImpose(pieza, fondo);
}

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(whiteSquare, blackSquare);

  char** blanca1 = CasillaOcupada(knight, whiteSquare);
  char** blanca2 = CasillaOcupada(knight, reverse(whiteSquare));
  char** v_blancas =  join(blanca1, blanca2);
  char** v_negras = join(reverse(blanca2), reverse(blanca1));
  char** pieza_Fondos = join (v_blancas, v_negras);
  interpreter(pieza_Fondos);
}
