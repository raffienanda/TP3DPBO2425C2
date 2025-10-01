public class Demon extends Karakter {
    // Atribut status untuk menyimpan status Demon
    private Status status;

    // Konstruktor
    public Demon(String nama, double tinggiBadan, int umur, Status status) {
        super(nama, tinggiBadan, umur); // Panggil konstruktor induk
        this.status = status;
    }

    // Getter dan setter untuk status
    public Status getStatus() { return status; }
    public void setStatus(Status status) { this.status = status; }

    // Override method tampilkanInfo untuk menampilkan info dan status Demon
    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo(); // Tampilkan info dari kelas induk
        System.out.println("== Status Demon ==");
        status.tampilkanStatus(); // Tampilkan status Demon
    }
}
