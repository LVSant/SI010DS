/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: devl
 *
 * Created on April 12, 2018, 10:12 PM
 */

#include <cstdlib>
#include <iostream>
#include "heap.h"
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

serialkillerstabber* insertSerialKillerStabber() {
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
    return new serialkillerstabber(name, country, weapon, victims);
}

serialkillershooter* insertSerialKillerShooter() {
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
    return new serialkillershooter(name, country, weapon, victims);
}

int main() {

    Heap heap;
    heap.print();

    string names[20] = {"Tadhg Meino", "Ina Hamlet", "Stefans Nadiya", "Vitalia Rhona", "Yasamin Marciano", "Nedeljka Mladenka", "Nathan Fungi", "Tadhg Meino", "Ina Hamlet", "Stefans Nadiya", "Vitalia Rhona", "Yasamin Marciano", "Nedeljka Mladenka", "Nathan Fungi", "Tadhg Meino", "Ina Hamlet", "Stefans Nadiya", "Vitalia Rhona", "Yasamin Marciano", "Nedeljka Mladenka"};
    string countries[20] = {"France", "Italy", "Brazil", "Cuba", "Russia", "Vietnam", "Singapore", "France", "Italy", "Brazil", "Cuba", "Russia", "Vietnam", "Singapore", "France", "Italy", "Brazil", "Cuba", "Russia", "Vietnam"};
    string weapon[20] = {"knife", "bassebal bat", "Ar15", "car", "hands", "poison", "gas", "knife", "bassebal bat", "Ar15", "car", "hands", "poison", "gas", "knife", "bassebal bat", "Ar15", "car", "hands", "poison"};
    double victims[20] = {12, 34, 10, 46, 28, 32, 14, 20, 24, 48, 16, 30, 42, 36, 44, 40, 22, 38, 26, 18};



    SerialKiller** ARRAY_ACCOUNT = new SerialKiller*[20];

    for (int i = 0; i < 20; i++) {
        SerialKiller* sk = new serialkillershooter(names[i], countries[i], weapon[i], victims[i]);
        heap.enqueue(sk);
    }

    //    Heap heap = Heap(20, ARRAY_ACCOUNT, 19) ;

    heap.print();

    cout << "------------------------------" << endl;

    //    for (int i = 0; i < 7; i++) {
    //        SerialKiller *sk = heap.dequeue();
    //        std::cout << "Maior: " << sk->getPriority() << std::endl;
    //        heap.print();
    //    }





    //    Heap heap;
    //    int total = 0;
    //    int assassinType = 1;
    //
    //    cout << "------------------------------" << endl;
    //    cout << "Entre quantos Serial Killers serao cadastrados: " << endl;
    //    cin >> total;
    //    total--;
    //
    //    if (total < 0) {
    //        return -1;
    //    }
    //
    //    for (int i = 0; i <= total; i++) {
    //        cout << "------------------------------" << endl;
    //        cout << "1 - SerialKiller" << endl;
    //        cout << "2 - SerialKillerStabber" << endl;
    //        cout << "3 - SerialKillerShooter" << endl;
    //        cin >> assassinType;
    //
    //        switch (assassinType) {
    //            case 1:
    //                heap.enqueue(insertSerialKiller());
    //                break;
    //            case 2:
    //                heap.enqueue(insertSerialKillerStabber());
    //                break;
    //            case 3:
    //                heap.enqueue(insertSerialKillerShooter());
    //                break;
    //            default: cout << "Undefined Serial Killer" << endl;
    //        }
    //
    //    }
    //    cout << "------------------------------" << endl;
    //    heap.print();
    //
    //    int opcao = 0;
    //    while (!heap.isEmpty() || opcao < 0) {
    //        cout << "------------------------------" << endl;
    //        cout << "0 - Sair" << endl;
    //        cout << "1 - Imprimir toda a Heap" << endl;
    //        cout << "2 - Remover elemento de maior prioridade" << endl;
    //        cin >> opcao;
    //
    //        if (opcao == 1) {
    //            cout << "------------------------------" << endl;
    //            heap.print();
    //        } else if (opcao == 2) {
    //            cout << "------------------------------" << endl;
    //            SerialKiller * sk = heap.dequeue();
    //
    //            cout << " Serial Killer: " << sk->getName()
    //                    << " Origin: " << sk->getCountry()
    //                    << " Favorite Weapon: " << sk->getFavoriteWeapon()
    //                    << " Priority: " << sk->getPriority() << std::endl;
    //        } else if (opcao == 0) {
    //            return -1;
    //        }
    //    }
    //
    //    cout << "Fim Original" << endl;
}