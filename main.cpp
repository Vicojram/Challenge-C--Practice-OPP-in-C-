#include <iostream>
#include <string>

#include "Character.h"
#include "Monster.h"
#include "Player.h"
#include "Room.h"

#define ROOMS 6

using namespace std;

bool yesNo(string question) {
    char action;

    cout << question << " (Y/N): ";
    cin >> action;

    switch (toupper(action)) {
        case 'Y':
            return true;
        case 'N':
            return false;
        default:
            cout << "Invalid input.\n";
            return yesNo(question);
    }
}

int main(){

    Player player = Player();

    string name;
    int newHp, newAttack;
    bool cleared;

    cout << "Enter you player name (Press enter for default value): \n";
    getline(cin, name);
    if (!name.empty()) {
        player.setName(name);
    }

    if (yesNo("Change HP? \n")) {
        int newHp;
        cout << "New HP: \n";
        cin >> newHp;
        player.setHp(newHp);
    }

    if (yesNo("Change Attack value? \n")) {
        int newAttack;
        cout << "New Attack value: \n";
        cin >> newAttack;
        player.setAttack(newAttack);
    }

    cout << "Welcome, " << player.getName() << "! HP: " << player.getHp() << " ATK: " << player.getAttack() << endl;

    for (int i = 1; i < ROOMS + 1; i++) {
        Monster enemy;
        enemy.setName(to_string(i));

        cout << "=== Entering Room " << to_string(i) << " === \n";
        
        cout << "A " << enemy.getName() << " appears! (HP: " << enemy.getHp() << ", ATK: " << enemy.getAttack() << ") \n";

        while (player.getAlive() == true) {
            enemy.takeDamage(player.getAttack());
            cout << player.getName() << " attacks " << enemy.getName() << " for " << player.getAttack() << ". (" << enemy.getHp() << " HP left) \n";
            if (enemy.getAlive() == false) {
                cout << "Monster defeated! " << player.getName() << " has " << player.getHp() << " HP left. \n";
                break;
            }
            player.takeDamage(enemy.getAttack());
            cout << enemy.getName() << " attacks " << player.getName() << " for " << enemy.getAttack() << ". (" << player.getHp() << " HP left) \n";
        }

        if (player.getAlive() == false) {
            cout << "=== GAME OVER ===";
            break;
        }

    }

    


    return 0;
}