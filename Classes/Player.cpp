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
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    _team = team;
    _gamePosition = gamePosition;
    
    switch (team) {
        case 0:
            this->initWithFile("redPlayer.png");
            setInitialPosition(origin, visibleSize);
            break;
        
        case 1:
            this->initWithFile("bluePlayer.png");
            setInitialPosition(Vec2(visibleSize) + origin, Size(-visibleSize.width, -visibleSize.height));
            this->setRotation(180);
            break;
            
        default:
            this->initWithFile("referee.png");
            break;
    }
    
    
    setInitialSize();
//    this->setAnchorPoint(Vec2(0,0));
}

void Player::setInitialPosition(Vec2 origin, Size visibleSize)
{
    switch (_gamePosition) {
        case 0:
            this->setPosition(Vec2(origin.x + visibleSize.width / 4,
                                   origin.y + visibleSize.height / 2));
            break;
        case 1:
            this->setPosition(Vec2(origin.x + visibleSize.width / 4,
                                   origin.y + visibleSize.height / 4));
            break;
        case 2:
            this->setPosition(Vec2(origin.x + visibleSize.width / 4,
                                   origin.y + visibleSize.height * 0.75));
            break;
        case 3:
            this->setPosition(Vec2(origin.x + visibleSize.width * 0.375,
                                   origin.y + visibleSize.height * 0.625));
            break;
        case 4:
            this->setPosition(Vec2(origin.x + visibleSize.width * 0.375,
                                   origin.y + visibleSize.height * 0.375));
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
