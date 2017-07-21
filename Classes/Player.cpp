//
//  Player.cpp
//  FootBall
//
//  Created by Hackintosh on 7/21/17.
//
//

#include "Player.h"

Player::Player(int team, int gamePosition)
{
    _team = team;
    _gamePosition = gamePosition;
    
    switch (team) {
        case 0:
            this->initWithFile("bluePlayer.png");
            break;
        
        case 1:
            this->initWithFile("redPlayer.png");
            break;
            
        default:
            this->initWithFile("referee.png");
            break;
    }
    
    setInitialPosition();
    setInitialSize();
//    this->setAnchorPoint(Vec2(0,0));
}

void Player::setInitialPosition()
{
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    switch (_gamePosition) {
        case 0:
            this->setPosition(Vec2(origin.x + visibleSize.width / 4,
                                   origin.y + visibleSize.height / 2));
            break;
            
        default:
            this->setPosition(origin);
            break;
    }
}

void Player::setInitialSize()
{
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
        
    float width = 0.039551 * visibleSize.width;
    float height = 0.113538 * visibleSize.height;
    
    this->setContentSize(Size(width, height));
}
