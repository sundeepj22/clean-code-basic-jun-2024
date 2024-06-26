#ifndef OFFSTATE_H
#define OFFSTATE_H

#include "DigitalSwitch.h"
#include "state.h"
#include "LowState.h"
#include <memory>
// Concrete state class
class OffState : public State {
public:
    void handleTrigger(DigitalSwitch& context) override {
        std::cout << "Switching from Off to Low" << std::endl;
        context.setState(std::make_unique<LowState>());
    }
};
#endif
