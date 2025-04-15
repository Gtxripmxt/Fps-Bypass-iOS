#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>

using namespace geode::prelude;

class $modify(CCScheduler) {
public:
    void tick(float dt) {
        dt = 1.0f / 240.0f; // Set to 240 FPS wooooo
        return $orig(dt);
    }
}:
