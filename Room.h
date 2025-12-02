#pragma once

#include <iostream>
#include <string>
#include "Monster.h"

class Room {
    private:
        Monster enemy;
        int roomNo;
        bool cleared;

    public:
        Room(int roomNo);

        void dungeonSetup(int roomNo);

        bool checkClear();
        bool getCleared();
        void setCleared(bool cleared);
        Monster& getEnemy();
};

