#include <string>
#include "Character.h"
#include "Monster.h"

using namespace std;

Monster :: Monster() : Character() {
    this->hp = (rand() % 40) + 10;
    this->attack = (rand() % 8) + 1;
    this->name = "Monster_Room_";
};

void Monster :: setName(string roomNo) {
    name += roomNo;
};