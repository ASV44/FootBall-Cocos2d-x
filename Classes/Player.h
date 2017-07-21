//
//  Player.h
//  FootBall
//
//  Created by Hackintosh on 7/21/17.
//
//

#ifndef Player_h
#define Player_h

USING_NS_CC;

class Player: public cocos2d::Sprite
{
public:
    Player(int team, int gamePosition);
    int getTeam();
    void setTeam(int team);
    
    
private:
    int _team;
    int _gamePosition;
    void setInitialPosition();
    void setInitialSize();
};

#endif /* Player_h */
