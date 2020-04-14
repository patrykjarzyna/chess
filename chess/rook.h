#include "piece.h"

class Queen : public Piece {

  public:
    Queen (bool isWhiteColor);
    ~Queen ();

    bool isValidMove ();
};
