#include "chess.h"
#include "figures.h"

char** CasillaOcupada(char** pieza, char** fondo){
  return superImpose(pieza, fondo);
}

void display(void){
  char** blackSquare = reverse(whiteSquare);
  char** pair = join(blackSquare, whiteSquare);
  char** fila = repeatH(pair, 4);
  char** fila_inversa = reverse(fila);
  char** parfilas = up(fila_inversa, fila);
  
  char** ParPeones = CasillaOcupada(join(pawn, pawn), pair);
  char** FilaPeones = repeatH(ParPeones, 4);
  char** Parte1PrimeraFila = join(rook, join(knight,bishop));
  char** Parte2PrimeraFila = join(bishop, join(knight, rook));
  char** Reyes = join(queen, king);

  char** PrimeraFilaBlancas = CasillaOcupada(join(Parte1PrimeraFila, join(Reyes, Parte2PrimeraFila)), fila);
  char** PrimeraFilaNegras = reverse(PrimeraFilaBlancas);

  char** inicialBlancas = up(FilaPeones, PrimeraFilaBlancas);
  char** inicialNegras = up(PrimeraFilaNegras, reverse(FilaPeones));
  interpreter(inicialNegras);

}
