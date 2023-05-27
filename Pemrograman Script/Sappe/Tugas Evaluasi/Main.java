import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    //input nama
    System.out.print("Masukkan nama anda: ");
    String  = new Scanner(System.in).nextLine();

    //input gaji
    System.out.print("Masukkan gaji anda: ");
    int gaji = new Scanner(System.in).nextInt();

    //gaji bersih
    System.out.println("Gaji bersih anda adalah: " + (gaji - (gaji * 0.1)));
    
  }
}

