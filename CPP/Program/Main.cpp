#include "Goblin.cpp"
#include "Manusia.cpp"
#include "Demon.cpp"
#include "HalfHumanDemon.cpp"

int main() {
    // Membuat objek Status dan Goblin
    Status s1(120, 80, 5);
    Goblin g1("Gruk", 150, 40, s1, "Taring Panjang & Otot Besar");
    g1.tampilkanInfo();

    // Membuat objek Status dan Manusia
    Status s2(100, 70, 3);
    Manusia m1("Arthur", 175, 25, s2, "Kesatria");
    m1.tampilkanInfo();

    // Membuat objek Status dan Demon
    Status s3(90, 60, 4);
    Demon d1("Azazel", 180, 300, s3, "Api Neraka", 200);
    d1.tampilkanInfo();

    // Membuat objek Status dan HalfHumanDemon
    Status s4(110, 75, 6);
    HalfHumanDemon h1("Draven", 185, 27, s4, "Pemanah", "Petir Gelap", 150, "Serigala");
    h1.tampilkanInfo();

    // Contoh penggunaan setter & getter pada transformasi
    h1.setTransformasi("Naga");
    cout << "Transformasi baru Draven: " << h1.getTransformasi() << endl;

    return 0;
}
