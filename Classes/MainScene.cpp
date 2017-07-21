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
    
    return true;
}

