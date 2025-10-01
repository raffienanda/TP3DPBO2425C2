#pragma once
#include "Manusia.cpp"
#include "Demon.cpp"

class HalfHumanDemon : public Manusia, public Demon {
private:
    string Transformasi; // Atribut untuk menyimpan bentuk transformasi
public:
    // Konstruktor HalfHumanDemon
    HalfHumanDemon(
        string nama, int tinggi, int umur, Status s,
        string role, string sihir, int mana, string transformasi)
        : Karakter(nama, tinggi, umur, s),
          Manusia(nama, tinggi, umur, s, role),
          Demon(nama, tinggi, umur, s, sihir, mana),
          Transformasi(transformasi) {}

    // Setter & Getter untuk Transformasi
    void setTransformasi(string t) { Transformasi = t; }
    string getTransformasi() { return Transformasi; }

    // Override tampilkanInfo untuk menampilkan info HalfHumanDemon
    void tampilkanInfo() override {
        cout << "[Half Human Demon]" << endl;
        Karakter::tampilkanInfo();
        cout << "Role: " << Role
             << ", Sihir: " << Sihir
             << ", Mana: " << Mana
             << ", Transformasi: " << Transformasi << endl;
        cout << "---------------------------" << endl;
    }
};
