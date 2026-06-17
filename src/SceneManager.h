#include "Scene.h"
#include <memory>
#include <vector>

class SceneManager {
  public:
    int init();
    void setScene(int index);
    void addScene(std::unique_ptr<Scene> s);

    void draw();
    void update();

  private:
    Scene* activeScene;
    int currentActiveSceneIndex;
    std::vector<std::unique_ptr<Scene>> scenes;
};
