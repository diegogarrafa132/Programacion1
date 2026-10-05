#include "chess.h"
#include "figures.h"

char** CasillaOcupada(char** pieza, char** fondo){
  return superImpose(pieza, fondo);
}

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(whiteSquare, blackSquare);
  char** fila = repeatH(pair, 4);
  char** fila_inversa = reverse(fila);
  char** parfilas = up(fila_inversa, fila);
  char** interme = repeatV(parfilas, 2);

  char** blanca1 = CasillaOcupada(pawn, reverse(whiteSquare));
  char** blanca2 = CasillaOcupada(pawn, whiteSquare);
  char** v_blancas =  join(blanca1, blanca2);

  char** OchoPeones = repeatH(v_blancas, 4);
  char** NOchoPeones = reverse(OchoPeones);

  char** tab10 = up(NOchoPeones, up(interme, OchoPeones));
  interpreter(tab10);

}
