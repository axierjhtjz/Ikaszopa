//
//  HUDManager.h
//  IkasGame
//
//  Created by Mikel Eizagirre on 2014-12-24.
//
//

#ifndef __IkasCocosGame__HUDManager__
#define __IkasCocosGame__HUDManager__

#include "cocos2d.h"
#include "../Constants/Constants.h"
#include "../Constants/CommonProtocols.h"

using namespace cocos2d;

class HUDManager
{
public:	// Public singleton
    static HUDManager* getInstance();
    ~HUDManager();

    void setDelegate(GameHUDDelegate *delegate) {_delegate = delegate;};
    void showMenu() {_delegate->showMenu();};
    void hideMenu() {_delegate->hideMenu();};

protected:
    HUDManager();
    
    static HUDManager * _instance;
    GameHUDDelegate *_delegate;
};
#endif /* defined(__IkasCocosGame__HUDManager__) */
