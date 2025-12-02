#include <iostream>
#include <string>
#include "Monster.h"
#include "Room.h"

using namespace std;

Room :: Room(int roomNo) {
    this->enemy = Monster();
    this->roomNo = roomNo;
    this->cleared = false;
};

void Room :: dungeonSetup(int roomNo) {
    enemy.setName(to_string(roomNo));
    cout << "=== Entering Room " << to_string(roomNo) << " === \n";

    cout << "A " << enemy.getName() << " appears! (HP: " << enemy.getHp() << ", ATK: " << enemy.getAttack() << ") \n";
}

bool Room :: checkClear() {
    if (enemy.getHp() <= 0) {
        cleared = true;
    }
    return cleared;
}

bool Room :: getCleared() {
    return cleared;
}

void Room :: setCleared(bool cleared) {
    this->cleared = cleared;
}

Monster& Room::getEnemy() {
    return enemy;
}
