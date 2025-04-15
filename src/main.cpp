#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

class $modify(GameManager) {
    void setGameVariable(const std::string& key, bool value) {
        if (key == "v_sync") {
            value = false; // Force disable VSync (or any other game var override)
        }
        GameManager::setGameVariable(key.c_str(), value);
    }
};
