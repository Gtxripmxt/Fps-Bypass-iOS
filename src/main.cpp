#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>

using namespace geode::prelude;

class $modify(MyScheduler, CCScheduler) {
public:
    void tick(float dt) {
        // Force delta time to simulate higher TPS (e.g. 240 FPS)
        dt = 1.0f / 240.0f;
        CCScheduler::tick(dt); // call original
    }
};
