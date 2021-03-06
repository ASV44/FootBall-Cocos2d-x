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
    Team *redTeam;
    Team *blueTeam;
    Sprite *ball;
};

#endif // __HELLOWORLD_SCENE_H__
