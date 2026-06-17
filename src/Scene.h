#pragma once

#include <vector>
#include <string>
#include "Target.h"

class Scene {
  public:
    std::vector<Target> targets;
    std::string sceneName;

    virtual void init() {}
    virtual void draw() {}
    virtual void update() {}
    virtual void addTarget(Target t) {
      targets.push_back(t);
    }
    virtual ~Scene() = default;
};
