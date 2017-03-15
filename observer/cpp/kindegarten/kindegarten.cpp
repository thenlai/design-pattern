#include "kindegarten.h"
#include <iostream>
#include <utility>

Kid::be_good(KidEvent event) {
    std::cout << this->name << " is ";
    switch (event) {
        case KidEvent::PLAY:
            std::cout << "playing.";
            break;
        case KidEvent::STUDY:
            std::cout << "studying.";
            break;
        case KidEvent::SLEEP:
            std::cout << "slepping.";
            break;
        default:
            std::cout << "doing nothing.";
    }
    std::cout << std::endl;
};

Kindegarten::Kindegarten() {};

void Kindegarten::register_kid(KidEvent event, Kid kid) {
    this->schedules.insert(std::make_pair(event, kid));
}

void Kindegarten::start(KidEvent event) {
    auto match = this->schedules.equal_range(event);
    while (match.first != match.second) {
        match.first->second.be_good(event);
        match.first++;
    }
};