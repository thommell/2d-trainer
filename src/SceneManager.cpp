#include "SceneManager.h"
#include <raylib.h>
#include <utility>
#include <vector>
#include "GameScene.h"

int SceneManager::init() {
  auto gameScene = std::make_unique<GameScene>("game");
  addScene(std::move(gameScene));
  setScene(0);

  TraceLog(LOG_DEBUG, "Initialized SceneManager");
  return 0;
}

void SceneManager::addScene(std::unique_ptr<Scene> s) {
  TraceLog(LOG_INFO, "Added scene: %s", s->sceneName.c_str());

  scenes.push_back(std::move(s));
}
void SceneManager::setScene(int index) {
  currentActiveSceneIndex = index;
  activeScene = scenes[index].get();

  TraceLog(LOG_INFO, "Set scene: %s", activeScene->sceneName.c_str()); 
  scenes[currentActiveSceneIndex]->init();
}

void SceneManager::update() {
  scenes[currentActiveSceneIndex]->update();
  // TraceLog(LOG_TRACE, "Active targets: %d", scenes[currentActiveSceneIndex]->targets.size());
  TraceLog(LOG_TRACE, "Scene count: %d", currentActiveSceneIndex);
}

void SceneManager::draw() {
  scenes[currentActiveSceneIndex]->draw();
}
