#include "piece.h"

class Bishop : public Piece {

  public:
    Bishop (bool isWhiteColor);
    ~Bishop ();

    bool isValidMove ();
};
