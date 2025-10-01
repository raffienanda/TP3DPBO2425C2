from Karakter import Karakter

# class Manusia turunan dari Karakter
class Manusia(Karakter):
    def __init__(self, nama, tinggi, umur, status, role):
        # panggil constructor Karakter langsung
        Karakter.__init__(self, nama, tinggi, umur, status)
        self._role = role  # atribut khusus manusia

    # Setter & Getter
    def set_role(self, r): self._role = r
    def get_role(self): return self._role

    # override tampilkan_info untuk tambah info role
    def tampilkan_info(self):
        print("[Manusia]")
        Karakter.tampilkan_info(self)  # panggil info dasar dari Karakter
        print(f"Role: {self._role}")
        print("---------------------------")
