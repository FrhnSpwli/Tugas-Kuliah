package Buku;

public class BukuMain {
    public static void main(String[] args) {
        Buku buku1 = new Buku();
        buku1.setJudul("Pemrograman Java");
        buku1.setPengarang("Budi");
        System.out.println("Judul Buku " + buku1.getJudul());
        System.out.println("Pengarang Buku " + buku1.getPengarang());
    }
}
