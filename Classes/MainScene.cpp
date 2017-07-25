#include "MainScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    return MainScene::create();
}

// on "init" you need to initialize your instance
bool MainScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto gameField = Sprite::create("field.png");

    gameField->setAnchorPoint(Point(0,0));
    gameField->setPosition(origin);
    gameField->setContentSize(visibleSize);

    this->addChild(gameField, 0);
    
    redTeam = new Team(Team::RED_TEAM);
    blueTeam = new Team(Team::BLUE_TEAM);
    this->addChild(redTeam);
    this->addChild(blueTeam);
    
    ball = Sprite::create("ball.png");
    ball->setPosition(Vec2(origin.x + visibleSize.width / 2,
                           origin.y + visibleSize.height / 2));
    ball->setScale(0.7);
    //CCLOG("Ball width:%f height:%f",ball->getContentSize().width, ball->getContentSize().height);
    this->addChild(ball);
//    CCLOG("Origin x:%f y:%f",origin.x,origin.y);
//    CCLOG("Visible Size x:%f y:%f", visibleSize.width, visibleSize.height);
//    CCLOG("Player x:%f y:%f",player->getPosition().x,player->getPosition().y);
//    CCLOG("Player width:%f height:%f",player->getContentSize().width, player->getContentSize().height);
//    float x = player->getContentSize().width / visibleSize.width;
//    float y = player->getContentSize().height / visibleSize.height;
//    CCLOG("Size ratio x:%f y:%f", x, y);
    
    this->scheduleUpdate();
    
    return true;
}

void MainScene::update(float delta) {
//    static auto player = this->getChildByName("player");
//    player->setPositionX(player->getPositionX() + 1);
}
