//
// Created by Max Yu on 9/22/20.
//

#ifndef LOOPSYSTEM_GROUP_H
#define LOOPSYSTEM_GROUP_H

#include <queue>
#include "Loop.h"

class Group {
private:
    std::queue<int> startQueue = std::queue<int>();
    bool stopFlag = false;
    Loop loops[4] = {Loop(), Loop(), Loop(), Loop()};
    int activeLoop;
public:
    void startLoop(int i);
    void stopLoop();
    void songUpdate();
    Loop getCurrentLoop();
};


#endif //LOOPSYSTEM_GROUP_H
