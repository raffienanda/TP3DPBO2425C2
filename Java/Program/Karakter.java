public class Karakter {
    // Atribut dasar karakter
    private String nama;
    private double tinggiBadan;
    private int umur;

    // Konstruktor
    public Karakter(String nama, double tinggiBadan, int umur) {
        this.nama = nama;
        this.tinggiBadan = tinggiBadan;
        this.umur = umur;
    }

    // Getter dan setter nama
    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    // Getter dan setter tinggi badan
    public double getTinggiBadan() { return tinggiBadan; }
    public void setTinggiBadan(double tinggiBadan) { this.tinggiBadan = tinggiBadan; }

    // Getter dan setter umur
    public int getUmur() { return umur; }
    public void setUmur(int umur) { this.umur = umur; }

    // Menampilkan info karakter
    public void tampilkanInfo() {
        System.out.println("Nama: " + nama);
        System.out.println("Tinggi Badan: " + tinggiBadan);
        System.out.println("Umur: " + umur);
    }
}
