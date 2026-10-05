#include "chess.h"
#include "figures.h"

char** CasillaOcupada(char** pieza, char** fondo){
  return superImpose(pieza, fondo);
}

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(whiteSquare, blackSquare);

  char** blanca1 = CasillaOcupada(pawn, reverse(whiteSquare));
  char** blanca2 = CasillaOcupada(pawn, whiteSquare);
  char** v_blancas =  join(blanca1, blanca2);

  char** OchoPeones = repeatH(v_blancas, 4);
  interpreter(OchoPeones);
}
