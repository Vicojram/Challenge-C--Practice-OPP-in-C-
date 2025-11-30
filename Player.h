#pragma once

#include <iostream>
#include <string>

#include "Character.h"

class Player : public Character {
    public:
        Player() : Character() {
            hp = 100;
            attack = 10;
            name = "Hero";
            alive = true;
        }
        Player(int hp, int attack, string name) : Character(hp, attack, name){
            hp = hp;
            attack = attack;
            name = name;
            alive = true;
        };
};