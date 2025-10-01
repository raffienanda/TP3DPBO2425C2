#pragma once
#include "Karakter.cpp"

class Goblin : public Karakter {
private:
    string FisikSpesial; // Atribut untuk menyimpan fisik spesial Goblin
public:
    // Konstruktor Goblin
    Goblin(string nama, int tinggi, int umur, Status s, string fisik)
        : Karakter(nama, tinggi, umur, s), FisikSpesial(fisik) {}

    // Setter & Getter untuk FisikSpesial
    void setFisikSpesial(string f) { FisikSpesial = f; }
    string getFisikSpesial() { return FisikSpesial; }

    // Override tampilkanInfo untuk menampilkan info Goblin
    void tampilkanInfo() override {
        cout << "[Goblin]" << endl;
        Karakter::tampilkanInfo();
        cout << "Fisik Spesial: " << FisikSpesial << endl;
        cout << "---------------------------" << endl;
    }
};
