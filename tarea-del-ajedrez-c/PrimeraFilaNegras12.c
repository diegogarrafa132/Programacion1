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

  char** Parte1PrimeraFila = join(rook, join(knight,bishop));
  char** Parte2PrimeraFila = join(bishop, join(knight, rook));
  char** Reyes = join(queen, king);
  char** PrimeraFilaBlancas = CasillaOcupada(join(Parte1PrimeraFila, join(Reyes, Parte2PrimeraFila)), fila_inversa);
  char** PrimeraFilaNegras = reverse(PrimeraFilaBlancas);
  interpreter(PrimeraFilaNegras);

}
