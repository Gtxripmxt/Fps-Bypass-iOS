#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>

using namespace geode::prelude;

class $modify(MyScheduler, cocos2d::CCScheduler) {
public:
    void update(float dt) override {
        dt = 1.0f / 240.0f; // 240 TPS or whatever i will make this sdgjfgfdfdgfdgdfgsdfjgfdkgdfkhgdfkghsfdlkhgfdklgfdkljgldkfsdlkj same as the number in the settings
        log::info("FPS bypass active - forcing dt = {}", dt);
        CCScheduler::update(dt);
    }
};
