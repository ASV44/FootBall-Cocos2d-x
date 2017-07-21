#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Team.h"

class MainScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    void update(float delta);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);

private:
    cocos2d::Sprite **redTeam;
    cocos2d::Sprite **blueTeam;
};

#endif // __HELLOWORLD_SCENE_H__
