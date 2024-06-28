//
// Created by berdan on 7.06.2024.
//

#ifndef CLASSES_HPP
#define CLASSES_HPP
#include "string"
#include "vector"

enum class ItemType {
    Weapon, // AK-47, M4A1, Glock...
    Tank,
    Aircraft,
    Other
};

enum class WeaponType {
    Rifle,
    SniperRifle,
    Shotgun,
    Pistol,
    MachineGun,
    Other
};

//================================================================================================


class InventoryItem {
public:
    // default constructor
    InventoryItem() = default;
    InventoryItem(std::string name, std::string description, ItemType type);
    InventoryItem(std::string name, ItemType type);
    InventoryItem(std::string name, std::string description, ItemType type, int yearManufactured);
    ~InventoryItem();


    virtual void Fire(); // Different fire methods for different items
    virtual void Reload();

    // properties
    std::string name = "";
    std::string description = "";
    int yearManufactured = 0;
    ItemType type = ItemType::Other;
};

//================================================================================================

class Storage {
public:
    Storage();
    Storage(int capacity); // If storage has limited capacity, we can set it here.

    void AddItem(InventoryItem* item);
    void RemoveItem(InventoryItem* item);
    void ListItems();

    std::vector<InventoryItem*> items;
    int capacity = -1; // unlimited capacity by default
};

//================================================================================================


class Weapon : public InventoryItem {
public:
    Weapon(std::string name, std::string description, WeaponType type, int yearManufactured);

    void Fire();
    void Reload();

    WeaponType weaponType = WeaponType::Other;
    int ammoLeft = 0;
};

//================================================================================================

class Tank : public InventoryItem {
public:
    Tank(std::string name, std::string description, int yearManufactured);

    void Fire();
    void Reload();

    int missileLeft = 0;
};


//================================================================================================

class Aircraft : public InventoryItem {
public:
    Aircraft(std::string name, std::string description, int maxSpeed, int fuelCapacity, int yearManufactured);

    void Fire();
    void Reload();

    int maxSpeed = 100; // km/h
    int fuelCapacity = 70; // liters
    int missileLeft = 0;
};



#endif
