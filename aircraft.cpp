#include "classes.h"
#include "iostream"
#include "unordered_map"

#define MAX_MISSILES 10

Aircraft::Aircraft(std::string name, std::string description, int maxSpeed, int fuelCapacity, int yearManufactured) {
    this->name = name;
    this->description = description;
    this->yearManufactured = yearManufactured;

    this->type = ItemType::Aircraft;
}

void Aircraft::Fire() {
    this->missileLeft--;
    if (this->missileLeft < 0) {
        this->missileLeft = 0;
        std::cout << this->name << ": Out of missiles!" << std::endl;
        return;
    }

    std::cout << "Firing missiles!" << std::endl;
}

void Aircraft::Reload() {
    this->missileLeft = MAX_MISSILES;
    std::cout << "Missiles reloaded!" << std::endl;
}