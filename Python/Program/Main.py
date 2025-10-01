from Status import Status
from Goblin import Goblin
from Manusia import Manusia
from Demon import Demon
from HalfHumanDemon import HalfHumanDemon

def main():
    # buat Goblin dengan status & atribut unik
    s1 = Status(120, 80, 5)
    g1 = Goblin("Gruk", 150, 40, s1, "Taring Panjang & Otot Besar")
    g1.tampilkan_info()

    # buat Manusia
    s2 = Status(100, 70, 3)
    m1 = Manusia("Arthur", 175, 25, s2, "Kesatria")
    m1.tampilkan_info()

    # buat Demon
    s3 = Status(90, 60, 4)
    d1 = Demon("Azazel", 180, 300, s3, "Api Neraka", 200)
    d1.tampilkan_info()

    # buat HalfHumanDemon (multiple inheritance)
    s4 = Status(110, 75, 6)
    h1 = HalfHumanDemon("Draven", 185, 27, s4, "Pemanah", "Petir Gelap", 150, "Serigala")
    h1.tampilkan_info()

    # contoh update atribut lewat setter & cek dengan getter
    h1.set_transformasi("Naga")
    print("Transformasi baru Draven:", h1.get_transformasi())

# titik masuk utama program
if __name__ == "__main__":
    main()
