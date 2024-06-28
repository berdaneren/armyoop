#include "classes.h"
#include "iostream"
#include "unordered_map"

InventoryItem::InventoryItem(std::string name, std::string description, ItemType type, int yearManufactured) {
    this->name = name;
    this->description = description;
    this->type = type;
    this->yearManufactured = yearManufactured;
}

InventoryItem::~InventoryItem()
{
    std::cout << "InventoryItem destroyed!" << std::endl;
}

InventoryItem::InventoryItem(std::string name, std::string description, ItemType type) {
    this->name = name;
    this->description = description;
    this->type = type;
}

InventoryItem::InventoryItem(std::string name, ItemType type) {
    this->name = name;
    this->type = type;
}


Storage::Storage() {
    this->capacity = -1; // Unlimited capacity
}

Storage::Storage(int capacity) {
    this->capacity= capacity;
}

void Storage::AddItem(InventoryItem* item) {
    if (this->capacity == -1 || this->items.size() < this->capacity) {
        this->items.push_back(item);
    }
    else {
        std::cout << "Storage is full!" << std::endl;
    }
}

void Storage::RemoveItem(InventoryItem* item) {
    auto it = std::find(this->items.begin(), this->items.end(), item);
    if (it != this->items.end()) {
        this->items.erase(it);

        delete item; // free memory
    }
}

void Storage::ListItems() {
    for (auto item : this->items) {
        std::cout << item->name << std::endl;
    }
}

void InventoryItem::Fire() {
    std::cout << "This item is not something that can be fired." << std::endl;
}

void InventoryItem::Reload() {
    std::cout << "This item is not something that can be reloaded." << std::endl;
}

