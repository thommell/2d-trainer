#include "Target.h"
#include <raylib.h>

void Target::draw() {
  DrawCircle(position.x, position.y, radius, color);
}

float speed = 0.01f;

void Target::update() {
  if (IsKeyDown(KEY_W)) {
    position.y -= 1 * speed;
  }
  if (IsKeyDown(KEY_A)) {
    position.x -= 1 * speed;
  }
  if (IsKeyDown(KEY_S)) {
    position.y += 1 * speed;
  }
  if (IsKeyDown(KEY_D)) {
    position.x += 1 * speed;
  }
}
