public class Main {
    public static void main(String[] args) {
        // Membuat beberapa objek Status
        Status s1 = new Status(100, 50, 30);
        Status s2 = new Status(120, 70, 40);
        Status s3 = new Status(80, 40, 20);
        Status s4 = new Status(150, 90, 60);

        // Membuat objek karakter dengan status masing-masing
        Manusia m = new Manusia("Andi", 175.5, 20, s1);
        Demon d = new Demon("Azazel", 200.0, 500, s2);
        Goblin g = new Goblin("Gobbo", 150.0, 30, s3);
        HalfHumanDemon hhd = new HalfHumanDemon("Inuyasha", 180.0, 120, s4);

        // Menampilkan info setiap karakter
        m.tampilkanInfo();
        System.out.println("----------------------");
        d.tampilkanInfo();
        System.out.println("----------------------");
        g.tampilkanInfo();
        System.out.println("----------------------");
        hhd.tampilkanInfo();
    }
}
