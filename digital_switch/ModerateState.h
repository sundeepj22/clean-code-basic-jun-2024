#ifndef MODERATESTATE_H
#define MODERATESTATE_H

#include "DigitalSwitch.h"
#include "state"
#include "HighState"
#include <memory>
// Concrete state class
class ModerateState : public State {
public:
    void handleTrigger(DigitalSwitch& context) override {
        std::cout << "Switching from Moderate to High" << std::endl;
        context.setState(std::make_unique<HighState>());
    }
};
#endif
