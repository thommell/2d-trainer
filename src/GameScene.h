#include "Scene.h"
#include <string>

class GameScene : public Scene {
  public:
    GameScene(std::string s) {
      sceneName = s;
    }

    void init() override;
    void draw() override;
};
