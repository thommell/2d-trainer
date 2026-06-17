#include "App.h"
#include <raylib.h>

const int SCREEN_WIDTH = 1080;
const int SCREEN_HEIGHT = 720;
const char* TITLE = "2d-trainer";

int App::Init() { 
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
  return 0; 
}

int App::Run() {
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
  }
  return 0;
}

int App::Destroy() {
  CloseWindow();
  return 0;
}
