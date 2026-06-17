#pragma once

#include <raylib.h>
#include "IDrawer.h"
#include "IUpdater.h"

class Target : public IDrawer, IUpdater{
  public:
    int radius;
    Color color;
    Vector2 position;
    
    void draw() override;
    void update() override;

    Target() : radius(3), color(BLUE), position({50.0f, 50.0f}) {}
    Target(int r, Color c, Vector2 p) : radius(r), color(c), position(p) {}
};
