//
// Created by Max Yu on 9/22/20.
//

#include "Loop.h"
#include "api/Material.h"

static Color colors[5] = {
        Color(0,0,0),
        Color(10,10,10),
        Color(50,50,50),
        Color(100,100,100),
        Color(255,255,255),
};

void Loop::setColor(Color c) {
    (* material).setColor(c);
}

void Loop::setMaterial(Material *newMat) {
    material = newMat;
}

void Loop::setFeedbackSystem(FeedbackSystem *fb) {
    feedbackSystem = fb;
}

void Loop::start() {
    currentState = SYNC;
}

void Loop::stop() {
    currentState = PAUSE;
}

void Loop::stateUpdate(LoopState st) {
    assert(st >= 2 && st <=4);
    (* material).setColor(colors[st]);
    currentState = st;
}

void Loop::performedAction() {
    switch (currentState) {
        case PAUSE:
            break;
        case SYNC:
            currentState = ACTIVE;
            break;
        case ACTIVE:
            (* feedbackSystem).positiveFeedback();
            break;
        case ADJUST:
            (* feedbackSystem).neutralFeedback();
            break;
        case PENALTY:
            (* feedbackSystem).negativeFeedback();
            break;
    }
}

