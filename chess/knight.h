#include "piece.h"

class Knight : public Piece {

  public:
    Knight (bool isWhiteColor);
    ~Knight  ();

    bool isValidMove ();
};
