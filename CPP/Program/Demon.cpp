#pragma once
#include "Karakter.cpp"

class Demon : virtual public Karakter {
protected:
    string Sihir; // Jenis sihir yang dimiliki Demon
    int Mana;     // Jumlah mana Demon
public:
    // Konstruktor Demon
    Demon(string nama, int tinggi, int umur, Status s, string sihir, int mana)
        : Karakter(nama, tinggi, umur, s), Sihir(sihir), Mana(mana) {}

    // Setter & Getter untuk Sihir dan Mana
    void setSihir(string s) { Sihir = s; }
    void setMana(int m) { Mana = m; }
    string getSihir() { return Sihir; }
    int getMana() { return Mana; }

    // Override tampilkanInfo untuk menampilkan info Demon
    void tampilkanInfo() override {
        cout << "[Demon]" << endl;
        Karakter::tampilkanInfo();
        cout << "Sihir: " << Sihir
             << ", Mana: " << Mana << endl;
        cout << "---------------------------" << endl;
    }
};
