#include "classes.h"
#include "iostream"

int main() {
    Storage storage(5);
    auto ak47_rifle1 = new Weapon("AK-47", "Assault rifle", WeaponType::Rifle, 1947);
    storage.AddItem(ak47_rifle1);
    ak47_rifle1->Reload();


    auto f12_jet = new Aircraft("F-12", "Fighter jet", 300, 85, 1999);
    storage.AddItem(f12_jet);
    f12_jet->Reload();

    auto m4a1_rifle = new Weapon("M4A1", "Assault rifle", WeaponType::Rifle, 1994);
    storage.AddItem(m4a1_rifle);
    m4a1_rifle->Reload();

    auto m16_rifle = new Weapon("M16", "Assault rifle", WeaponType::Rifle, 1964);
    storage.AddItem(m16_rifle);
    m16_rifle->Reload();

    auto glock_pistol = new Weapon("Glock 17", "Pistol", WeaponType::Pistol, 1982);
    storage.AddItem(glock_pistol);
    glock_pistol->Reload();

    auto panzer_tank = new Tank("Panzer", "Tank", 1940);
    storage.AddItem(panzer_tank);
    panzer_tank->Reload();





    ak47_rifle1->Fire();
    m16_rifle->Fire();
    glock_pistol->Fire();
    f12_jet->Fire();
    panzer_tank->Fire();
    m4a1_rifle->Fire();


    storage.RemoveItem(ak47_rifle1);
    storage.RemoveItem(f12_jet);

    // as ak47_rifle1 and f12_jet are removed from storage, you cant fire a non-allocated item
    //ak47_rifle1->Fire();
    //f12_jet->Fire();

    storage.ListItems();



    // wait for press enter to close
    std::cin >> std::ws;

    return 0;
}
