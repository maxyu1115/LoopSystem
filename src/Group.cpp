//
// Created by Max Yu on 9/22/20.
//

#include "Group.h"

void Group::startLoop(int i) {
    assert(i >= 0 && i <= 3);
    startQueue.push(i);
}

// It's unnecessary to stop a loop when wanting to start a new one
void Group::stopLoop() {
    stopFlag = true;
}

void Group::songUpdate() {
    if (stopFlag) {
        loops[activeLoop].stop();
        stopFlag = false;
    }

    if (startQueue.empty())
        return;

    int i = startQueue.front();
    startQueue.pop();

    if (i == activeLoop) {
        return;
    } else {
        loops[activeLoop].stop();
        loops[i].start();
        activeLoop = i;
    }
}

Loop Group::getCurrentLoop() {
    return loops[activeLoop];
}
