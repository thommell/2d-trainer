#include "App.h"
#include <raylib.h>
#include "SceneManager.h"

const int SCREEN_WIDTH = 1080;
const int SCREEN_HEIGHT = 720;
const char *TITLE = "2d-trainer";
SceneManager sceneManager_;

int App::init() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
  SetTraceLogLevel(LOG_ALL);

  sceneManager_.init();
  return 0;
}

int App::run() {
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    sceneManager_.update();
    sceneManager_.draw();
    EndDrawing();
  }
  return 0;
}

int App::destroy() {
  CloseWindow();
  return 0;
}
