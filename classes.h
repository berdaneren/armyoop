//
// Created by berdan on 7.06.2024.
//

#ifndef CLASSES_H
#define CLASSES_H
#include <string>
#include <vector>

class InventoryItem {
public:
    virtual ~InventoryItem() = default;

    virtual std::string GetName() = 0;
    virtual std::string GetDescription() = 0;
    virtual int GetYearManufactured() = 0;
    virtual std::string GetType() = 0;
};

class InventoryStorage {
public:
    void CreateItem(InventoryItem* item);
    std::vector<InventoryItem*> GetItems();
    std::vector<InventoryItem*> GetItems(const std::string& ItemType);
private:
    std::vector<InventoryItem*> items;
};

class WeaponAKM : public InventoryItem {
    std::string GetName() override;
    std::string GetDescription() override;
    int GetYearManufactured() override;
    std::string GetType() override;
};

class WeaponWKWWilk : public InventoryItem {
    std::string GetName() override;
    std::string GetDescription() override;
    int GetYearManufactured() override;
    std::string GetType() override;
};

class TankPT91Twardy : public InventoryItem {
    std::string GetName() override;
    std::string GetDescription() override;
    int GetYearManufactured() override;
    std::string GetType() override;
};

#endif //CLASSES_H
