#include<iostream>
#include"DigitalSwitch.h"
#include"OffState.h"
int main() {
    DigitalSwitch switchInstance;
    switchInstance.setState(std::make_unique<OffState>());

    // Simulate state transitions
    for (int i = 0; i < 10; ++i) {
        switchInstance.trigger();
    }

    return 0;
}
