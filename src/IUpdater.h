#pragma once

#include <raylib.h>

class IUpdater {
  public:
    virtual void update() = 0;
    virtual ~IUpdater() = default;
};
