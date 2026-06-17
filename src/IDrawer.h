#pragma once

#include <raylib.h>

class IDrawer {
  public:

    virtual void draw() = 0;
    virtual ~IDrawer() = default;
};
