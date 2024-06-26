#ifndef DIGITALSWITCH_H
#define DIGITALSWITCH_H

#include <iostream>
#include <memory>

// Forward declaration of State class
class State;

// Context class representing the digital switch
class DigitalSwitch {
public:
    void setState(std::unique_ptr<State> newState) {
        currentState = std::move(newState);
    }

    void trigger() {
        currentState->handleTrigger(*this);
    }

private:
    std::unique_ptr<State> currentState;
};
#endif
