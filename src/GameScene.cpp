#include "GameScene.h"
#include <raylib.h>

void GameScene::init() {
  for (int i = 0; i <= 4; i++) {
    Target t;
    t.position.x = 10 * i;
    t.position.y = 5 * i;
    addTarget(t);
  }
}

void GameScene::draw() {
  for (ulong i = 0; i < targets.size(); i++) {
    Target t = targets[i];
    DrawCircle(t.position.x, t.position.y, t.radius, t.color);
  }
}
