#pragma once

#include <string>
#include <iostream>
#include <random>

#include "Character.h"

class Monster : public Character {
    public:
        Monster() : Character() {
            hp = (rand() % 40) + 10;
            attack = (rand() % 8) + 1;
            name = "Monster_Room_";
            alive = true;
        }

        void setName(string roomNo) {
            name += roomNo;
        };
};