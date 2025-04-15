#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>
#include <Geode/loader/Mod.hpp>

using namespace geode::prelude;

class $modify(CCSchedulerHook, cocos2d::CCScheduler) {
    void update(float dt) override {
        float targetTPS = 240.0f;
        float adjustedDt = 1.0f / targetTPS;

        // Only modify dt if it's in gameplay
        if (GameManager::sharedState()->getPlayLayer()) {
            cocos2d::CCScheduler::update(adjustedDt);
        } else {
            cocos2d::CCScheduler::update(dt); // Normal menu behavior
        }
    }
};
