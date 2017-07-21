//
//  Team.h
//  FootBall
//
//  Created by Hackintosh on 7/21/17.
//
//

#ifndef Team_h
#define Team_h

#include "Player.h"

class Team: public Node
{
public:
    Team(int teamId);
    Team(int teamId, int playersNumber);
    enum teams { RED_TEAM, BLUE_TEAM };
    
private:
    int _teamId;
    int _playersNumber;
    Player **players;
    void addPlayers();
};

#endif /* Team_h */
