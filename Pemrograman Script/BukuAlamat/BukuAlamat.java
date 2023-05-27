package BukuAlamat;

import java.util.Scanner;

public class BukuAlamat {
    private FieldData[] dataBuku = new FieldData[100];
    private int jumlahData = 0;

    private static FieldData inputFieldData() {
        Scanner input = new Scanner(System.in);
        System.out.print("Nama: ");
        String nama = input.nextLine();
        System.out.print("Alamat: ");
        String alamat = input.nextLine();
        System.out.print("Kontak: ");
        String kontak = input.nextLine();
        System.out.print("Email: ");
        String email = input.nextLine();
        return new FieldData(nama, alamat, kontak, email);
    }

    public static void tambahData(BukuAlamat bukuAlamat) {
        bukuAlamat.dataBuku[bukuAlamat.jumlahData] = inputFieldData();
        bukuAlamat.jumlahData++;
    }

    public static void tampilkanData(BukuAlamat bukuAlamat) {
        if(bukuAlamat.jumlahData == 0) {
            System.out.println("Data kosong");
        } else {
            for(int i = 0; i < bukuAlamat.jumlahData; i++) {
                System.out.println("Data ke-" + (i + 1));
                System.out.println("Nama: " + bukuAlamat.dataBuku[i].getNama());
                System.out.println("Alamat: " + bukuAlamat.dataBuku[i].getAlamat());
                System.out.println("Kontak: " + bukuAlamat.dataBuku[i].getKontak());
                System.out.println("Email: " + bukuAlamat.dataBuku[i].getEmail());
            }
        }
    }

    public static void hapusData(BukuAlamat bukuAlamat) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan nomor data yang akan dihapus: ");
        int nomorData = input.nextInt();
        if (nomorData > bukuAlamat.jumlahData) {
            System.out.println("Data tidak ditemukan");
        } else {
            for (int i = nomorData - 1; i < bukuAlamat.jumlahData; i++) {
                bukuAlamat.dataBuku[i] = bukuAlamat.dataBuku[i + 1];
            }
            bukuAlamat.jumlahData--;
            System.out.println("Data berhasil dihapus");
        }
    }

    public static void editData(BukuAlamat bukuAlamat) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan nomor data yang akan diedit: ");
        int nomorData = input.nextInt();
        if (nomorData > bukuAlamat.jumlahData) {
            System.out.println("Data tidak ditemukan");
        } else {
            System.out.println("Data ke-" + nomorData);
            System.out.println("Nama: " + bukuAlamat.dataBuku[nomorData - 1].getNama());
            System.out.println("Alamat: " + bukuAlamat.dataBuku[nomorData - 1].getAlamat());
            System.out.println("Kontak: " + bukuAlamat.dataBuku[nomorData - 1].getKontak());
            System.out.println("Email: " + bukuAlamat.dataBuku[nomorData - 1].getEmail());
            System.out.println();
            System.out.println("Masukkan data baru");
            bukuAlamat.dataBuku[nomorData - 1] = inputFieldData();
            System.out.println("Data berhasil diedit");
        }
    }

    public static void main(String[] args) {
        BukuAlamat bukuAlamat = new BukuAlamat();
        Scanner input = new Scanner(System.in);
        int pilihan;
        do {
            System.out.println("\n==========================");
            System.out.println("Menu");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampilkan Data");
            System.out.println("3. Hapus Data");
            System.out.println("4. Edit Data");
            System.out.println("5. Keluar");
            System.out.print("===> ");
            System.out.print("Pilihan: ");
            pilihan = input.nextInt();
            switch (pilihan) {
                case 1:
                    tambahData(bukuAlamat);
                    break;
                case 2:
                    tampilkanData(bukuAlamat);
                    break;
                case 3:
                    hapusData(bukuAlamat);
                    break;
                case 4:
                    editData(bukuAlamat);
                    break;
                case 5:
                    System.out.println("Terima kasih");
                    break;
                default:
                    System.out.println("Pilihan tidak tersedia");
            }
        } while (pilihan != 5);
    }
}