#pragma once

#include <string>
#include <iostream>
#include <random>

#include "Character.h"

class Monster : public Character {
    public:
        Monster();
        void setName(std::string roomNo);
};