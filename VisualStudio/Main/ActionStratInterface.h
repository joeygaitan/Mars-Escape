#pragma once
#include "WorldObject.h"

struct ActionStratInterface
{
    virtual void Draw(WorldObject* pWorldObject) = 0;

    virtual ~ActionStratInterface() {}
};
