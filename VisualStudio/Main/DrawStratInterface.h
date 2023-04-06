#pragma once
#include "WorldObject.h"

struct DrawStratInterface
{
    virtual void Draw(WorldObject* pWorldObject) = 0;

    virtual ~DrawStratInterface() {}
};