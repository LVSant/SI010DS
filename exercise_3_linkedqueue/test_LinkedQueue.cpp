
/* 
 * File:   main.cpp
 * Author: devl
 *
 * Created on May 08, 2018, 19:13 PM
 */

#include <cstdlib>
#include <iostream>
#include "LinkedQueue.h"
#include "serialkiller.h"
#include "serialkillershooter.h"
#include "serialkillerstabber.h"

using namespace std;

SerialKiller* insertSerialKiller() {
    string name;
    string country;
    string weapon;
    int victims;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Country: " << endl;
    cin >> country;
    cout << "Weapon: " << endl;
    cin >> weapon;
    cout << "Victims: " << endl;
    cin >> victims;
    return new SerialKiller(name, country, weapon, victims);
}

SerialKillerStabber* insertSerialKillerStabber() {
    string name;
    string country;
    string weapon;
    int victims;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Country: " << endl;
    cin >> country;
    cout << "Weapon: " << endl;
    cin >> weapon;
    cout << "Victims: " << endl;
    cin >> victims;
    return new SerialKillerStabber(name, country, weapon, victims);
}

SerialKillerShooter* insertSerialKillerShooter() {
    string name;
    string country;
    string weapon;
    int victims;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Country: " << endl;
    cin >> country;
    cout << "Weapon: " << endl;
    cin >> weapon;
    cout << "Victims: " << endl;
    cin >> victims;
    return new SerialKillerShooter(name, country, weapon, victims);
}

int main() {

    LinkedQueue queue;
    int assassinType = 0;

    do {
        cout << "------------------------------" << endl;
        cout << "0 - Exit" << endl;
        cout << "1 - SerialKiller" << endl;
        cout << "2 - SerialKillerStabber" << endl;
        cout << "3 - SerialKillerShooter" << endl;
        cin >> assassinType;

        switch (assassinType) {
            case 0:
                break;
            case 1:
                queue.enqueue(*insertSerialKiller());
                break;
            case 2:
                queue.enqueue(*insertSerialKillerStabber());
                break;
            case 3:
                queue.enqueue(*insertSerialKillerShooter());
                break;
            default: cout << "Undefined Serial Killer" << endl;
        }

    } while (assassinType > 0);
    cout << "------------------------------" << endl;
    queue.print();

    int opcao = 0;
    while (!queue.isEmpty() || opcao < 0) {
        cout << "------------------------------" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Imprimir toda a Queue" << endl;
        cout << "2 - Remover primeiro elemento da Queue" << endl;
        cin >> opcao;

        if (opcao == 1) {
            cout << "------------------------------" << endl;
            queue.print();
        } else if (opcao == 2) {
            cout << "------------------------------" << endl;
            SerialKiller sk = queue.dequeue();

            cout << " Serial Killer: " << sk.getName()
                    << " Origin: " << sk.getCountry()
                    << " Favorite Weapon: " << sk.getFavoriteWeapon()
                    << " Priority: " << sk.getPriority() << std::endl;
        } else if (opcao == 0) {
            return -1;
        }
    }

    cout << "Fim Original" << endl;
}
