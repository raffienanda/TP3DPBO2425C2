from Manusia import Manusia   # import class Manusia
from Demon import Demon       # import class Demon
from Karakter import Karakter # import class Karakter (base utama)

# Multiple inheritance: HalfHumanDemon mewarisi Manusia & Demon
class HalfHumanDemon(Manusia, Demon):
    def __init__(self, nama, tinggi, umur, status, role, sihir, mana, transformasi):
        # panggil constructor Manusia
        Manusia.__init__(self, nama, tinggi, umur, status, role)
        # panggil constructor Demon
        Demon.__init__(self, nama, tinggi, umur, status, sihir, mana)
        self._transformasi = transformasi  # atribut khusus HalfHumanDemon

    # Setter & Getter transformasi
    def set_transformasi(self, t): self._transformasi = t
    def get_transformasi(self): return self._transformasi

    def tampilkan_info(self):
        print("[Half Human Demon]")
        Karakter.tampilkan_info(self)  # tampilkan info dasar dari Karakter
        # tampilkan atribut dari gabungan Manusia + Demon + HalfHumanDemon
        print(f"Role: {self._role}, Sihir: {self._sihir}, Mana: {self._mana}, Transformasi: {self._transformasi}")
        print("---------------------------")
