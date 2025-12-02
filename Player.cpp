#include <string>
#include "Character.h"
#include "Player.h"

using namespace std;

Player:: Player() : Character() {
    hp = 100;
    attack = 10;
    name = "Hero";
}

Player:: Player(int hp, int attack, string name) : Character(hp, attack, name){
    this->hp = hp;
    this->attack = attack;
    this->name = name;
};