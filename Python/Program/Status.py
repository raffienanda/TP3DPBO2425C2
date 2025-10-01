class Status:
    def __init__(self, hp=100, stamina=50, level=1):
        # atribut privat pakai double underscore
        self.__hp = hp
        self.__stamina = stamina
        self.__level = level

    # Setter
    def set_hp(self, hp): 
        self.__hp = hp   # ubah nilai HP

    def set_stamina(self, s): 
        self.__stamina = s   # ubah nilai stamina

    def set_level(self, l): 
        self.__level = l   # ubah nilai level

    # Getter
    def get_hp(self): 
        return self.__hp   # ambil nilai HP

    def get_stamina(self): 
        return self.__stamina   # ambil nilai stamina

    def get_level(self): 
        return self.__level   # ambil nilai level

    # tampilkan semua status dalam satu baris
    def tampilkan_status(self):
        print(f"HP: {self.__hp}, Stamina: {self.__stamina}, Level: {self.__level}")
