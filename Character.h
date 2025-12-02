#pragma once

#include <string>

class Character {
    protected:
        std::string name;
        int hp;
        int attack;

    public:
        Character();
        Character(int hp, int attack, std::string name);

        int getHp();
        int getAttack();
        std::string getName();
        
        void setHp(int newHp);
        void setAttack(int newAttack);
        void setName(std::string newName);
        
        void takeDamage(int amt);
};