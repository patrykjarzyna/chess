#include "piece.h"

class Pawn : public Piece {

  public:
    Pawn(bool isWhiteColor);
    ~Pawn ();

    bool isValidMove ();
};
