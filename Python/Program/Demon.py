from Karakter import Karakter

class Demon(Karakter):
    def __init__(self, nama, tinggi, umur, status, sihir, mana):
        Karakter.__init__(self, nama, tinggi, umur, status)  # langsung ke Karakter
        self._sihir = sihir   # Jenis sihir Demon
        self._mana = mana     # Jumlah mana Demon

    # Setter & Getter
    def set_sihir(self, s): self._sihir = s
    def set_mana(self, m): self._mana = m
    def get_sihir(self): return self._sihir
    def get_mana(self): return self._mana

    # Menampilkan info Demon
    def tampilkan_info(self):
        print("[Demon]")
        Karakter.tampilkan_info(self)
        print(f"Sihir: {self._sihir}, Mana: {self._mana}")
        print("---------------------------")
