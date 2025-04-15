#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

class $modify(GameManager) {
    void setGameVariable(const std::string& key, bool value) {
        if (key == "v_sync") {
            // force disable vsync or TPS cap toggle
            value = false;
        }
        GameManager::setGameVariable(key, value);
    }
};
