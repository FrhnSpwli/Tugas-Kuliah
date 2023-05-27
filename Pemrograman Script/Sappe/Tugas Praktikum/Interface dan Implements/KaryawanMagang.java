public class KaryawanMagang implements Karyawan, Mahasiswa {
    private String nama;
    private String nik;
    private String jabatan;
    private String universitas;

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setNik(String nik) {
        this.nik = nik;
    }

    public void setJabatan(String jabatan) {
        this.jabatan = jabatan;
    }

    public void setUniversitas(String universitas) {
        this.universitas = universitas;
    }

    public String getNama() {
        return nama;
    }

    public String getNik() {
        return nik;
    }

    public String getJabatan() {
        return jabatan;
    }

    public String getUniversitas() {
        return universitas;
    }

}
