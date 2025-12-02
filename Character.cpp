#include <string>
#include "Character.h"

using namespace std;

Character :: Character() {
    name = "";
    hp = 0;
    attack = 0;
}
Character :: Character(int hp, int attack, string name) {
    this->hp = hp;
    this->attack = attack;
    this->name = name;
}

int Character :: getHp() {
    return hp;
}
int Character :: getAttack() {
    return attack;
}
string Character :: getName() {
    return name;
}

void Character :: setHp(int newHp) {
    hp = newHp;
}
void Character :: setAttack(int newAttack) {
    attack = newAttack;
}
void Character :: setName(string newName) {
    name = newName;
}

void Character :: takeDamage(int amt) {
    hp -= amt;
    if (hp < 0) {
        hp = 0;
    }
}