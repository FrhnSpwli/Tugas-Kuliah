public class BukuMain {
  public static void main(String[] args) {
    Buku buku = new Buku();
    buku.setJudul("Pemrograman Java");
    buku.setPengarang("Budi");
    System.out.println("Judul buku: " + buku.getJudul());
    System.out.println("Pengarang: " + buku.getPengarang());
  }
}
