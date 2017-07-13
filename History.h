#ifndef History_h
#define History_h
#include "globals.h"

class History
{
public:
    bool record(int r, int c);
    History(int nRows, int nCols);
    void display() const;
        
private:
    int m_nRows;
    int m_nCols;
    int m_atePoisonPellet[MAXROWS][MAXCOLS];
};
#endif /* History_h */
