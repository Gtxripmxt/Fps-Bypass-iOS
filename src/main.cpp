#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>

using namespace geode::prelude;

class $modify(MyScheduler, CCScheduler) {
public:
    void tick(float dt) {
        // Simulate high TPS by reducing frame delta
        dt = 1.0f / 240.0f;
        $orig(dt); // ✅ call the original tick method correctly
    }
};
