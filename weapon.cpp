#include "classes.h"
#include "iostream"
#include "unordered_map"

#define MAX_RIFLE_AMMO 30
#define MAX_PISTOL_AMMO 12
#define MAX_SHOTGUN_AMMO 8
#define MAX_SNIPER_AMMO 5
#define MAX_MACHINEGUN_AMMO 100

Weapon::Weapon(std::string name, std::string description, WeaponType type, int yearManufactured) {
    this->name = name;
    this->description = description;
    this->weaponType = type;
    this->yearManufactured = yearManufactured;

    this->type = ItemType::Weapon;
}


void Weapon::Fire() {
    this->ammoLeft--;
    if (this->ammoLeft < 0) {
        this->ammoLeft = 0;
        std::cout << this->name << ": Out of ammo!" << std::endl;
        return;
    }

    std::cout << "Firing weapon!" << std::endl;
}

void Weapon::Reload() {
    switch (this->weaponType)
    {
        case WeaponType::Rifle:
            this->ammoLeft = MAX_RIFLE_AMMO;
            break;
        case WeaponType::SniperRifle:
            this->ammoLeft = MAX_SNIPER_AMMO;
            break;
        case WeaponType::Shotgun:
            this->ammoLeft = MAX_SHOTGUN_AMMO;
            break;
        case WeaponType::Pistol:
            this->ammoLeft = MAX_PISTOL_AMMO;
            break;
        case WeaponType::MachineGun:
            this->ammoLeft = MAX_MACHINEGUN_AMMO;
            break;
        default:
            std::cout << "This weapon type is not supported!" << std::endl;
            return;
            break;
    }

    std::cout << "Ammo reloaded!" << std::endl;
}