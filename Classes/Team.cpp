//
//  Team.cpp
//  FootBall
//
//  Created by Hackintosh on 7/21/17.
//
//

#include <stdio.h>
#include "Team.h"

Team::Team(int teamId)
{
    _teamId = teamId;
    
    _playersNumber = 5;
    
    addPlayers();
}

Team::Team(int teamId, int playersNumber)
{
    _teamId = teamId;
    
    _playersNumber = playersNumber;
    
    addPlayers();
}

void Team::addPlayers()
{
    players = new Player*[_playersNumber];
    
    for(int i = 0; i < _playersNumber; ++i) {
        players[i] = new Player(_teamId, i);
        this->addChild(players[i], 1);
    }
}
