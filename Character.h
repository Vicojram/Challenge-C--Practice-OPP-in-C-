#pragma once

#include <iostream>
#include <string>
using namespace std;

class Character {
    protected:
        string name;
        int hp;
        int attack;
        bool alive;

    public:
        Character() {
            name = " ";
            hp = 0;
            attack = 0;
            alive = true;
        };
        Character(int hp, int attack, string name) {
            hp = hp;
            attack = attack;
            name = name;
            alive = true;
        };

        int getHp() {
            return hp;
        };
        int getAttack() {
            return attack;
        };
        string getName() {
            return name;
        };
        bool getAlive() {
            return alive;
        };

        void setHp(int newHp) {
            hp = newHp;
        };
        void setAttack(int newAttack) {
            attack = newAttack;
        };
        void setName(string newName) {
            name = newName;
        };
        void setAlive(bool newAlive) {
            alive = newAlive;
        };

        void takeDamage(int amt) {
            hp -= amt;
            if (hp < 0) {
                alive = false;
                hp = 0;
            }
        }
};