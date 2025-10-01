#pragma once
#include <iostream>
#include <string>
#include "Status.cpp"
using namespace std;

class Karakter {
protected:
    string Nama;         // Nama karakter
    int TinggiBadan;     // Tinggi badan karakter
    int Umur;            // Umur karakter
    Status status;       // Status karakter

public:
    // Konstruktor
    Karakter(string nama, int tinggi, int umur, Status s)
        : Nama(nama), TinggiBadan(tinggi), Umur(umur), status(s) {}

    // Setter
    void setNama(string n) { Nama = n; }
    void setTinggiBadan(int t) { TinggiBadan = t; }
    void setUmur(int u) { Umur = u; }
    void setStatus(Status s) { status = s; }

    // Getter
    string getNama() { return Nama; }
    int getTinggiBadan() { return TinggiBadan; }
    int getUmur() { return Umur; }
    Status getStatus() { return status; }

    // Menampilkan info karakter
    virtual void tampilkanInfo() {
        cout << "Nama: " << Nama
             << ", Tinggi: " << TinggiBadan
             << ", Umur: " << Umur << endl;
        status.tampilkanStatus();
    }
};
