#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

// If there's a global frame delta or tick method you want to patch,
// hook into a reliable method like this:

class $modify(GameManager) {
    void setGameVariable(const std::string& key, bool value) {
        if (key == "v_sync") {
            // force disable vsync or TPS cap toggle
            value = false;
        }
        GameManager::setGameVariable(key, value);
    }
};
