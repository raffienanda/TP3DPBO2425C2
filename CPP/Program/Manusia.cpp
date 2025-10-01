#pragma once
#include "Karakter.cpp"

class Manusia : virtual public Karakter {
protected:
    string Role; // Atribut untuk menyimpan role Manusia
public:
    // Konstruktor Manusia
    Manusia(string nama, int tinggi, int umur, Status s, string role)
        : Karakter(nama, tinggi, umur, s), Role(role) {}

    // Setter & Getter untuk Role
    void setRole(string r) { Role = r; }
    string getRole() { return Role; }

    // Override tampilkanInfo untuk menampilkan info Manusia
    void tampilkanInfo() override {
        cout << "[Manusia]" << endl;
        Karakter::tampilkanInfo();
        cout << "Role: " << Role << endl;
        cout << "---------------------------" << endl;
    }
};
