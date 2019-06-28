//
//  cbcUpdate.cpp
//  cbcUpdate
//
//  Created by 王光磊 on 2019/6/28.
//  Copyright © 2019 王光磊. All rights reserved.
//

#include <iostream>
#include "cbcUpdate.hpp"
#include "cbcUpdatePriv.hpp"

void cbcUpdate::HelloWorld(const char * s)
{
    cbcUpdatePriv *theObj = new cbcUpdatePriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void cbcUpdatePriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

