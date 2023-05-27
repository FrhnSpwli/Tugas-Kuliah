#include <stdio.h>

#define JUDUL "Saya Generasi Unggul Kebanggan Indonesia"
#define BILANGAN 100

void main (){
    int angka = 10;
    char huruf = 'A';
    float pecahan = 4.53424;

    printf("Konstanta JUDUL adalah %s\n", JUDUL);
    printf("Konstanta BILANGAN adalah %i\n", BILANGAN);

    puts("Ini adalah fungsi puts");
    puts("Silahkan di coba");

    putchar ('$');
    printf ("\nUang adalah kebutuhan untuk hidup\n");

    //selanjutnya kita coba panggil angka, huruf, dan pecahan

    printf("Variabel angka = %d\n", angka);
    printf("Variabel huruf = %c\n", huruf);
    printf("Variabel float = %f\n", pecahan);
    printf("Variabel float = %.2f\n", pecahan); //cara batasi nol dibelakang koma
}

/*
    KODE PENENTU FORMAT TIPE DATA DI BAHASA C
    %c = menampilkan data karakter
    %s = menampilkan data string
    %i,%d = menampilkan data bil. bulat
    %f,%e = manampilkan data bil. desimal
    %o = menampilakn bil. octal
    %x = menampilkan bil. heksadesimal
    %u = menampilkan bil. unsigned
*/
