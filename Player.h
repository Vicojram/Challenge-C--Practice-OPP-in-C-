#pragma once

#include <iostream>
#include <string>

#include "Character.h"

class Player : public Character {
    public:
        Player();
        Player(int hp, int attack, std::string name);
};