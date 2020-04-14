#include <iostream.h>

using namespace std;

class Piece {

  private:
    bool _isWhiteColor;
    char mark;

  public:
    Piece (bool isWhiteColor);
    virtual ~Piece () = 0;

    virtual int isValidMove();

    bool isSameColor(bool color);
};
