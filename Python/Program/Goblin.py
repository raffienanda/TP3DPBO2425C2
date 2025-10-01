from Karakter import Karakter

class Goblin(Karakter):
    def __init__(self, nama, tinggi, umur, status, fisik):
        super().__init__(nama, tinggi, umur, status)
        self._fisik_spesial = fisik  # Atribut fisik spesial Goblin

    # Setter & Getter
    def set_fisik_spesial(self, f): self._fisik_spesial = f
    def get_fisik_spesial(self): return self._fisik_spesial

    # Menampilkan info Goblin
    def tampilkan_info(self):
        print("[Goblin]")
        super().tampilkan_info()
        print(f"Fisik Spesial: {self._fisik_spesial}")
        print("---------------------------")
