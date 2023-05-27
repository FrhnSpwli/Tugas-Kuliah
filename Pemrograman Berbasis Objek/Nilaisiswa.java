import java.util.Scanner;

public class Nilaisiswa {
    public static void main(String[] args) {
        int nilai;
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Masukkan nilai siswa : ");
        nilai = keyboard.nextInt();

        keyboard.close();

        if (nilai > 85) {
            System.out.println("A");
        } else if (nilai >= 70 && nilai <= 85) {
            System.out.println("B");
        } else if (nilai >= 55 && nilai <= 69) {
            System.out.println("C");
        } else if (nilai >= 40 && nilai <= 54) {
            System.out.println("D");
        } else {
            System.out.println("E");
        }
    }
}
