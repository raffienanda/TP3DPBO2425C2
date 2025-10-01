#pragma once
#include <iostream>
using namespace std;

class Status {
private:
    int HP;        // Menyimpan nilai HP (Health Point)
    int Stamina;   // Menyimpan nilai stamina
    int Level;     // Menyimpan level karakter
public:
    // Konstruktor dengan nilai default
    Status(int hp = 100, int stamina = 50, int level = 1)
        : HP(hp), Stamina(stamina), Level(level) {}

    // Setter
    void setHP(int hp) { HP = hp; }
    void setStamina(int s) { Stamina = s; }
    void setLevel(int l) { Level = l; }

    // Getter
    int getHP() { return HP; }
    int getStamina() { return Stamina; }
    int getLevel() { return Level; }

    // Menampilkan status ke layar
    void tampilkanStatus() {
        cout << "HP: " << HP
             << ", Stamina: " << Stamina
             << ", Level: " << Level << endl;
    }
};
