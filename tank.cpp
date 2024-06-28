#include "classes.h"
#include "iostream"
#include "unordered_map"

#define MAX_MISSILES 3

Tank::Tank(std::string name, std::string description, int yearManufactured) {
    this->name = name;
    this->description = description;
    this->yearManufactured = yearManufactured;

    this->type = ItemType::Tank;
}

void Tank::Fire() {
    this->missileLeft--;
    if (this->missileLeft < 0) {
        this->missileLeft = 0;
        std::cout << this->name << ": Out of missiles!" << std::endl;
        return;
    }

    std::cout << this->name << ": Firing missles!" << std::endl;
}

void Tank::Reload() {
    this->missileLeft = MAX_MISSILES;
    std::cout << this->name << ": Missiles reloaded!" << std::endl;
}