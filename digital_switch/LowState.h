#ifndef LOWSTATE_H
#define LOWSTATE_H

#include "DigitalSwitch.h"
#include "State.h"

// Concrete state class
class LowState : public State {
public:
    void handleTrigger(DigitalSwitch& context) override {
        std::cout << "Switching from Low to Moderate" << std::endl;
        context.setState(std::make_unique<ModerateState>());
    }
};
#endif
