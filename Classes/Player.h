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
    bool isSelected();
    void selectPlayer();
    void resetSelection();
    
private:
    int _team;
    int _gamePosition;
    void setInitialPosition(Vec2 origin, Size visibleSize);
    void setInitialSize();
    EventListenerTouchOneByOne *listener;
    DrawNode *selectionDot;
    bool selected;
};

#endif /* Player_h */
