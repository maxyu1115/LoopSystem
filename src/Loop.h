//
// Created by Max Yu on 9/22/20.
//

#ifndef LOOPSYSTEM_LOOP_H
#define LOOPSYSTEM_LOOP_H

#include <queue>
#include "api/Material.h"
#include "api/FeedbackSystem.h"

enum LoopState {
    PAUSE = 0,
    SYNC = 1,
    ACTIVE = 2,
    ADJUST = 3,
    PENALTY = 4
};

class Loop {
private:
    FeedbackSystem * feedbackSystem;
    Material * material;
    LoopState currentState;
    void setColor(Color);
public:
    Loop() : material(nullptr), feedbackSystem(nullptr),
        currentState(PAUSE) {}
    void setMaterial(Material *);
    void setFeedbackSystem(FeedbackSystem *);
    void start();
    void stop();
    void stateUpdate(LoopState);
    void performedAction();
};


#endif //LOOPSYSTEM_LOOP_H
