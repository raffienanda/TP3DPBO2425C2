public class Status {
    // Atribut untuk menyimpan nilai health, power, dan defense
    private int health;
    private int power;
    private int defense;

    // Konstruktor untuk inisialisasi status
    public Status(int health, int power, int defense) {
        this.health = health;
        this.power = power;
        this.defense = defense;
    }

    // Getter dan setter untuk health
    public int getHealth() { return health; }
    public void setHealth(int health) { this.health = health; }

    // Getter dan setter untuk power
    public int getPower() { return power; }
    public void setPower(int power) { this.power = power; }

    // Getter dan setter untuk defense
    public int getDefense() { return defense; }
    public void setDefense(int defense) { this.defense = defense; }

    // Menampilkan status ke layar
    public void tampilkanStatus() {
        System.out.println("Health: " + health);
        System.out.println("Power: " + power);
        System.out.println("Defense: " + defense);
    }
}
