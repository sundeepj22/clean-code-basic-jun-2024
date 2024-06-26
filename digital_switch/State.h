#ifndef STATE_H
#define STATE_H

#include "DigitalSwitch.h"

// Abstract base class for states
class State {
public:
    virtual void handleTrigger(DigitalSwitch& context) = 0;
};
#endif
