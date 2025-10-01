from Status import Status  # import class Status untuk dipakai di atribut

class Karakter:
    def __init__(self, nama, tinggi, umur, status: Status):
        # atribut dasar karakter
        self._nama = nama
        self._tinggi = tinggi
        self._umur = umur
        self._status = status

    # Setter
    def set_nama(self, n): self._nama = n
    def set_tinggi(self, t): self._tinggi = t
    def set_umur(self, u): self._umur = u
    def set_status(self, s: Status): self._status = s

    # Getter
    def get_nama(self): return self._nama
    def get_tinggi(self): return self._tinggi
    def get_umur(self): return self._umur
    def get_status(self): return self._status

    # tampilkan informasi umum karakter
    def tampilkan_info(self):
        print(f"Nama: {self._nama}, Tinggi: {self._tinggi}, Umur: {self._umur}")
        self._status.tampilkan_status()  # delegasi ke Status
