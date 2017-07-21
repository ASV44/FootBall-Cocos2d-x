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
    
    auto player = new Player(0,0);
    //player->setScale(1.5);
    
    this->addChild(player, 1);
    
//    CCLOG("Origin x:%f y:%f",origin.x,origin.y);
//    CCLOG("Visible Size x:%f y:%f", visibleSize.width, visibleSize.height);
//    CCLOG("Player x:%f y:%f",player->getPosition().x,player->getPosition().y);
//    CCLOG("Player width:%f height:%f",player->getContentSize().width, player->getContentSize().height);
    float x = player->getContentSize().width / visibleSize.width;
    float y = player->getContentSize().height / visibleSize.height;
    CCLOG("Size ratio x:%f y:%f", x, y);
    
    this->scheduleUpdate();
    
    return true;
}

void MainScene::update(float delta) {
    
}
