//
// Created by berdan on 7.06.2024.
//

#include "classes.h"

// --- AKM

std::string WeaponAKM::GetName() {
    return "AKM";
}
std::string WeaponAKM::GetDescription() {
    return "Around 300,000 in storage. Replaced in service by Beryl and Grot. Limited use for training purposes.";
}
int WeaponAKM::GetYearManufactured() {
    return 1958;
}
std::string WeaponAKM::GetType() {
    return "Rifle";
}

// --- WKW Wilk

std::string WeaponWKWWilk::GetName() {
    return "WKW Wilk";
}
std::string WeaponWKWWilk::GetDescription() {
    return "Modern anti-materiel and sniper rifle produced in Poland";
}
int WeaponWKWWilk::GetYearManufactured() {
    return 2005;
}
std::string WeaponWKWWilk::GetType() {
    return "Sniper Rifle";
}

// --- PT-91 Twardy

std::string TankPT91Twardy::GetName() {
    return "PT-91 Twardy";
}
std::string TankPT91Twardy::GetDescription() {
    return "Polish main battle tank. A development of the T-72M1, it entered service in 1995";
}
int TankPT91Twardy::GetYearManufactured() {
    return 1994;
}
std::string TankPT91Twardy::GetType() {
    return "Tank";
}
