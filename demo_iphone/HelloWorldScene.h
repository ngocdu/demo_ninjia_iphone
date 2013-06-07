#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::CCLayerColor
{
private:
    cocos2d::CCPoint location;
    cocos2d::CCSprite *player;
    cocos2d::CCArray * arrayTarget;
    cocos2d::CCArray * arrayProjectile;
public:
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();

    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    
    void update(float dt);
    void addtaget();
    void gamelogictarget(float dt);
    
    void removeTarget(cocos2d::CCNode *node);
    void removeProjectile(cocos2d::CCNode *node);
    
    virtual bool ccTouchBegan(cocos2d::CCTouch * touch,cocos2d::CCEvent* event);
	virtual void ccTouchesMoved(cocos2d::CCSet* touch,cocos2d::CCEvent* event);
	virtual void ccTouchesEnded(cocos2d::CCSet* touches,cocos2d::CCEvent* event);
    
    

    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
