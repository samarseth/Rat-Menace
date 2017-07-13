//
//  Game.h
//  CSNewExperiment
//
//  Created by Samar Seth on 1/15/17.
//  Copyright © 2017 Samar Seth. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include "globals.h"

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRats);
    ~Game();
    
    
    bool recommendMove(const Arena& a, int r, int c, int& bestDir);
    int computeDanger(const Arena& a, int r, int c);

    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
    
    // Helper functions
    std::string takePlayerTurn();
};
#endif /* Game_h */
