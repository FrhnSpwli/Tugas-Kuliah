//Andi Farhan Sappewali
//D121211078
//Kelas C

import java.util.Scanner;

public class KonversiSuhu {
    private static Scanner keyboard;
    public static void main(String[] args) {
        keyboard = new Scanner(System.in);
        System.out.println("Pilih konversi suhu");
        System.out.println("1. Celcius ke Fahrenheit");
        System.out.println("2. Fahrenheit ke Celcius");
        System.out.println("Masukkan pilihan anda : ");
        while (keyboard.hasNext()) {
            if(keyboard.hasNextInt()){
                int pilihan = keyboard.nextInt();
                if (pilihan == 1) {
                    System.out.println("Masukkan suhu dalam celcius : ");
                    int celciusToFahrenheit = keyboard.nextInt();
                    System.out.println("\nSuhu dalam fahrenheit : " + celciusToFahrenheit(celciusToFahrenheit));
                    return;
                } else if (pilihan == 2) {
                    System.out.println("Masukkan suhu dalam fahrenheit : ");
                    int fahrenheitToCelcius = keyboard.nextInt();
                    System.out.println("\nSuhu dalam celcius : " + fahrenheitToCelcius(fahrenheitToCelcius));
                    return;
                } else {
                    System.out.println("Pilihan tidak tersedia");
                }
            } else {
                System.out.println("Input harus berupa angka");
                System.out.println("Masukkan pilihan anda : ");
                keyboard.next();
            }
        }
        keyboard.close();
    }
        
    public static int celciusToFahrenheit(int celcius){
        return (celcius * 9/5) + 32;
    }

    public static int fahrenheitToCelcius(int fahrenheit){
        return (fahrenheit - 32) * 5/9;
    }
}

        
 