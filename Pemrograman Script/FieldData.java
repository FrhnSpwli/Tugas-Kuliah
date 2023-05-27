import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class FieldData
{
public FieldData(String nama, String alamat, String kontak, String email) {
    }

public static void main( String[] args ){
StudentRecord namaRecord = new StudentRecord();
BufferedReader dataIn=new BufferedReader(new InputStreamReader(System.in));
String [] nama =new String[100];
String [] alamat =new String[100];
String [] telp =new String[100];
String [] email =new String[100];
String PIL="";
String n="";
String yatidak="";
int no;
int jumlah=0;
         do {
            try {
System.out.println("************* MENU ************");
System.out.println("** 1. MEMASUKAN DATA         **");
System.out.println("** 2. MENGHAPUS DATA         **");
System.out.println("** 3. MENAMPILKAN DATA       **");
System.out.println("** 4. MENGUBAH DATA          **");
System.out.println("** 5. KELUAR                 **");
System.out.println("*******************************");
System.out.print("\nMASUKAN PILIHAN [1..5]:");
           try{
            PIL=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
//Menampilkan nama siswa
switch(Integer.parseInt(PIL)){
//awal prosedur memasukan
case 1:
    System.out.print("Input Jumlah Siswa Baru:");
           try{
           n=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    jumlah=Integer.parseInt(n);
    for(int i=0; i<jumlah; i++ ){
    System.out.println("Data ke: "+(i+1));
    System.out.print("Input Nama: ");
           try{
            nama[i]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input Alamat: ");
           try{
            alamat[i]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input telpon: ");
           try{
            telp[i]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input Email: ");
           try{
            email[i]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    }
    for(int i=0; i<jumlah; i++ ){
    namaRecord.setName(nama[i],i,alamat[i],telp[i],email[i]);
    System.out.println("===========================================");
    System.out.println("Nama                  :"+namaRecord.getName(i) );
    System.out.println("Alamat                :"+namaRecord.getAlamat(i) );
    System.out.println("Telepon               :"+namaRecord.getTelpon(i) );
    System.out.println("Email                 :"+namaRecord.getEmail(i) );
    System.out.println("===========================================");
    }
    System.out.println("Data Telah Berhasil dimasukan");
    break;
//AKHIR prosedur memasukan
case 2:
    System.out.println("Menghapus Data");
    System.out.print("Input No Siswa yang Akan Dihapus: Input [1-"+jumlah+"]: ");
           try{
           n=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    no=Integer.parseInt(n);
    System.out.println("Ditemukan Data ke- "+no);
    no=no-1;
    namaRecord.setName(nama[no],no,alamat[no],telp[no],email[no]);
    System.out.println("===========================================");
    System.out.println("Nama                  :"+namaRecord.getName(no) );
    System.out.println("Alamat                :"+namaRecord.getAlamat(no) );
    System.out.println("Telepon               :"+namaRecord.getTelpon(no) );
    System.out.println("Email                 :"+namaRecord.getEmail(no) );
    System.out.println("===========================================");
    System.out.print("Yakin akan dihapus? [y]/[t] :");
           try{
           yatidak=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    if ((yatidak=="tidak")||(yatidak=="t")||(yatidak=="T")){
        System.out.println("Data Tidak Jadi di hapus");
    }else{
        nama[no]="";
        alamat[no]="";
        telp[no]="";
        email[no]="";
    namaRecord.setName(nama[no],no,alamat[no],telp[no],email[no]);
    System.out.println("===========================================");
    System.out.println("Nama                  :"+namaRecord.getName(no) );
    System.out.println("Alamat                :"+namaRecord.getAlamat(no) );
    System.out.println("Telepon               :"+namaRecord.getTelpon(no) );
    System.out.println("Email                 :"+namaRecord.getEmail(no) );
    System.out.println("===========================================");
        System.out.println("Data Berhasil Dihapus");
    }
    break;
case 3:
        System.out.println("DAFTAR SEMUA DATA SISWA");
        System.out.println("===========================================");
        for(int i=0; i<jumlah; i++ ){
            namaRecord.setName(nama[i],i,alamat[i],telp[i],email[i]);
            System.out.println("Nama                  :"+namaRecord.getName(i) );
            System.out.println("Alamat                :"+namaRecord.getAlamat(i) );
            System.out.println("Telepon               :"+namaRecord.getTelpon(i) );
            System.out.println("Email                 :"+namaRecord.getEmail(i) );
            System.out.println("===========================================");
        }
        break;
case 4:
            System.out.println("Mengubah Data");
    System.out.print("Input No Siswa yang Akan Diubah datanya: Input [1-"+jumlah+"]: ");
           try{
           n=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    no=Integer.parseInt(n);
    System.out.println("Ditemukan Data ke- "+no);
    no=no-1;
    namaRecord.setName(nama[no],no,alamat[no],telp[no],email[no]);
    System.out.println("===========================================");
    System.out.println("Nama                  :"+namaRecord.getName(no) );
    System.out.println("Alamat                :"+namaRecord.getAlamat(no) );
    System.out.println("Telepon               :"+namaRecord.getTelpon(no) );
    System.out.println("Email                 :"+namaRecord.getEmail(no) );
    System.out.println("===========================================");
    System.out.print("Lanjutkan Proses Ubah Data? [y]/[t] :");
           try{
           yatidak=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    if ((yatidak=="tidak")||(yatidak=="t")||(yatidak=="T")){
        System.out.println("Data Tidak Jadi di ubah");
    }else{
 System.out.println("Proses Ubah Data ke: "+(no+1));
    System.out.print("Input Nama: ");
           try{
            nama[no]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input Alamat: ");
           try{
            alamat[no]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input telpon: ");
           try{
            telp[no]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    System.out.print("Input Email: ");
           try{
            email[no]=dataIn.readLine();
           }catch(IOException e){
           System.out.println("Erorr!");
           }
    namaRecord.setName(nama[no],no,alamat[no],telp[no],email[no]);
    System.out.println("===========================================");
    System.out.println("Nama                  :"+namaRecord.getName(no) );
    System.out.println("Alamat                :"+namaRecord.getAlamat(no) );
    System.out.println("Telepon               :"+namaRecord.getTelpon(no) );
    System.out.println("Email                 :"+namaRecord.getEmail(no) );
    System.out.println("===========================================");
        System.out.println("Data Berhasil Diubah");
    }
    break;
default:
    System.out.println("Terima Kasih");
}
            } catch (Exception e) {
                System.out.println("inputTidakValid");
            }
        } while (Integer.parseInt(PIL) != 5);
    }
}
