# JANJI
Saya Raffie Arsy Ananda dengan NIM 2405916 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

<hr>


# 1. class Karakter
class ini sebgai class utama (parent utama) dari semua class lainnya. class ini berisi data fisik umum dari karakter. atributnya terdapat Nama, TinggiBadan, dan Umur. Class ini berperan sebagai parent dari 3 class, karena 3 classnya itu merupakan jenis jenis ras dari karakter. class ini juga membentuk Hierarchical inheritance dengan class Goblin, Manusia, dan Demon. 

# 2. class Goblin
class ini merupakan keturunan dari class Karakter karena goblin  merupakan salah satu ras dari karakter yang terdapat pada game rpg ini. class Goblin juga memiliki atribut FisikSpesial, karena dibandingkan dengan karakter lainnya ia memiliki fisik yang spesial seperti, gigi taring yang panjang dan massa otot yang lebih dibanding rata-rata. 

3. class Manusia
class ini juga merupakan keturunan dari class Karakter, sama seperti goblin ia juga salah satu jenis ras yang terdapat pada game RPG ini. class Manusia memiliki atribut Role, Role yang dimaksud disini adalah keahlian manusia yang berbeda beda, contohnya seperti pemanah, kesatria, dan garda depan.
class Manusia juga akan memiliki class keturunan, yaitu HalfHumanDemon.

4. class Demon
class ini sama seperti Manusia dan Goblin. Demon juga merupakan salah satu karakter yang terdapat pada game RPG. class ini memiliki atribut Sihir yang merupakan nama dari sihir yang ia gunakan dan atribut Mana yang merupakan stamina versi sihir. class demon mempunyai class keturunan juga sama seperti manusia, yaitu HalfHumanDemon. 

5. class HalfHumanDemon
class ini merupakan hasil gabungan dari Manusia dan Demon, sehingga class ini membentuk multiple inheritance dengan class Manusia dan Demon. class ini memiliki atribut spesial yaitu Transformasi. Transformasi disini berarti ras ini dapat berubah menjadi hewan, setiap orang pasti berbeda hewannya, sehingga atribut ini diisi dengan hewan perubahannya.

6. class Status
class ini berhubungan komposisi dengan Karakter, karena setiap karakter pasti memiliki status HP, stamina, dan level. Jika karakter tidak memiliki status tersebut, maka karakter tidak akan ada atau mati.

