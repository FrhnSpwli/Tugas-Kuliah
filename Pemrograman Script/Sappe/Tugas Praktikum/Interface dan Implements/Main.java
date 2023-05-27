public class Main {
  public static void main(String[] args) {
    KaryawanMagang karyawan1 = new KaryawanMagang();
    karyawan1.setJabatan("Akuntan");
    System.out.println("Jabatan: "+karyawan1.getJabatan());

    karyawan1.setNama("Budi");
    karyawan1.setNik("7370002909940001");
    karyawan1.setUniversitas("Universitas Hasanuddin");
    System.out.println("Nama: "+karyawan1.getNama());
    System.out.println("NIK: "+karyawan1.getNik());
    System.out.println("Warganegara: "+karyawan1.warganegara);
    System.out.println("Universitas: "+karyawan1.getUniversitas());
  }
}
