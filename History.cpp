//
//  History.cpp
//  CSP1Practice
//
//  Created by Samar Seth on 1/13/17.
//  Copyright © 2017 Samar Seth. All rights reserved.
//



#include "History.h"

using namespace std;

History::History(int nRows, int nCols)
: m_nRows(nRows), m_nCols(nCols)
{
    for (int i = 0; i < m_nRows; i++)
        for (int j = 0; j < m_nCols; j++)
            m_atePoisonPellet[i][j] = 0;
}
bool History::record(int r, int c)
{
   	if(r>m_nRows || c>m_nCols)
        return false;
    m_atePoisonPellet[r-1][c-1] +=1;
    return true;
}
void History::display() const
{
    clearScreen();

    char displayStuff[MAXROWS][MAXCOLS];
        for (int i = 0; i < m_nRows; i++)
        for (int j = 0; j <m_nCols; j++)
        {
            int counter = m_atePoisonPellet[i][j];
            if (counter == 0)
            {
                displayStuff[i][j] = '.';
            }
            else if (counter >= 26)
            {
                displayStuff[i][j] = 'Z';
            }
            else
            {
                displayStuff[i][j] = counter + 64;
            }
        }
    
    
    for (int i = 0; i < m_nRows; i++)
    {
        for (int j = 0; j <m_nCols; j++)
            cout << displayStuff[i][j];
        cout << endl;
    }
    cout << endl;
    
    }
