public class Goblin extends Karakter {
    // Atribut status untuk menyimpan status Goblin
    private Status status;

    // Konstruktor
    public Goblin(String nama, double tinggiBadan, int umur, Status status) {
        super(nama, tinggiBadan, umur); // Panggil konstruktor induk
        this.status = status;
    }

    // Getter dan setter untuk status
    public Status getStatus() { return status; }
    public void setStatus(Status status) { this.status = status; }

    // Override method tampilkanInfo untuk menampilkan info dan status Goblin
    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo(); // Tampilkan info dari kelas induk
        System.out.println("== Status Goblin ==");
        status.tampilkanStatus(); // Tampilkan status Goblin
    }
}
