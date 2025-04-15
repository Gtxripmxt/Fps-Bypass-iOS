#include <Geode/Geode.hpp>
##include <Geode/modify/CCScheduler.hpp>

using namespace geode::prelude;

class $modify(MyScheduler, CCScheduler) {
public:
    void tick(float dt) override {
        dt = 1.0f / 240.0f; // 240 TPS i will make this costumizable when idk
        CCScheduler::tick(dt);
    }
};
