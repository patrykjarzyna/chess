#include "piece.h"

class King : public Piece {

  public:
    King (bool isWhiteColor);
    ~King ();

    bool isValidMove();
    bool isGone()
};
