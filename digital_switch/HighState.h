#ifndef HIGHSTATE_H
#define HIGHSTATE_H

#include "DigitalSwitch.h"
#include "state.h"
#include "OffState.h"
#include <memory>
// Concrete state class
class HighState : public State {
public:
    void handleTrigger(DigitalSwitch& context) override {
        std::cout << "Switching from High to Off" << std::endl;
        context.setState(std::make_unique<OffState>());
    }
};
#endif
