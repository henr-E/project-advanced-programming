//
// Created by henri kerch on 24/11/2022.
//

#include "State.h"
State::State(StateManager& stateManager)
    : stateManager(stateManager) {}

void State::userInput(Event &event) {}
void State::draw() {}
void State::simulate() {}

//void State::setSfWindow(shared_ptr<RenderWindow>& sfWindow) {
//    State::sfWindow = sfWindow;
//}
State::~State() {}
