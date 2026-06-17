#include "App.h"
#include "Target.h"
#include <raylib.h>

const int SCREEN_WIDTH = 1080;
const int SCREEN_HEIGHT = 720;
const char *TITLE = "2d-trainer";

Target t;

int App::init() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
  t.position = {SCREEN_WIDTH * 0.5f, SCREEN_HEIGHT * 0.5f};
  t.radius = 50;
  t.color = PURPLE;
  return 0;
}

int App::run() {
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    // temp
    t.draw();
    t.update();
    EndDrawing();
  }
  return 0;
}

int App::destroy() {
  CloseWindow();
  return 0;
}
