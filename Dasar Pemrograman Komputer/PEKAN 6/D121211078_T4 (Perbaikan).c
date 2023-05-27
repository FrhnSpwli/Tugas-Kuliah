/*
Nama    : Andi Farhan Sappewali
Nim     : D121211078
DASAR PEMROGRAMAN KOMPUTER (INFORMATIKA C)
*/

#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

    float persegipanjang ()
    {
        float panjang, lebar, keliling, luas;
        printf ("\nMenghitung Keliling dan Luas Persegi Panjang\n");
        printf ("\tInput nilai panjang : ");
        scanf ("%f", &panjang);
        printf ("\tInput nilai lebar : ");
        scanf ("%f", &lebar);
        keliling = (2*panjang) + (2*lebar);
        luas = panjang * lebar;
        printf ("\nKeliling Persegi Panjang : %.2f\n", keliling);
        printf ("Luas Persegi Panjang : %.2f\n", luas);
    }

    float segitiga ()
    {
        float alas, tinggi, s1, s2, keliling, luas;
        printf ("\nMenghitung Keliling dan Luas Segitiga\n");
        printf ("\tInput nilai alas : ");
        scanf ("%f", &alas);
        printf ("\tInput nilai tinggi : ");
        scanf ("%f", &tinggi);
        printf ("\tInput Sisi 1 : ");
        scanf ("%f", &s1);
        printf ("\tInput Sisi 2 : ");
        scanf ("%f", &s2);
        keliling = alas + s1 + s2;
        luas = 0.5 * alas * tinggi;
        printf ("\nKeliling Segitiga : %.2f\n", keliling);
        printf ("Luas Segitiga : %.2f\n", luas);
    }

    float lingkaran ()
    {
        float r, d, keliling, luas;
        printf ("\nMenghitung Keliling dan Luas Lingkaran\n");
        printf ("\tInput nilai jari-jari : ");
        scanf ("%f", &r);
        d = 2 * r;
        keliling = phi * d;
        luas = phi * r * r;
        printf ("\nKeliling Lingkaran : %.2f\n", keliling);
        printf ("Luas Lingkaran : %.2f\n", luas);
    }

    float trapesium ()
    {
        float atas, bawah, kanan, kiri, tinggi, keliling, luas;
        printf ("\nMenghitung Keliling dan Luas Trapesium\n");
        printf ("\tInput nilai sisi bawah : ");
        scanf ("%f", &bawah);
        printf ("\tInput nilai sisi atas : ");
        scanf ("%f", &atas);
        printf ("\tInput nilai sisi kanan : ");
        scanf ("%f", &kanan);
        printf ("\tInput nilai sisi  kiri : ");
        scanf ("%f", &kiri);
        printf ("\tInput nilai tinggi : ");
        scanf ("%f", &tinggi);
        keliling = atas + bawah + kanan + kiri;
        luas = 0.5 * (atas + bawah) * tinggi;
        printf ("\nKeliling Trapesium : %.2f\n", keliling);
        printf ("Luas Trapesium : %.2f\n", luas);
    }

    float keluar ()
    {
        printf ("See U Next Time\n");
        return 0;
    }

    float main ()
    {
        int pilih;
        char ulang;
        TitikUtama:
        do
        {
            printf ("\nMENU UTAMA\n");
            printf ("Program Perhitungan Luas dan Keliling Bidang Datar\n");
            printf ("Silahkan memilih bangun datar yang anda inginkan\n");
            printf ("\t1. Persegi Panjang\n");
            printf ("\t2. Segitiga\n");
            printf ("\t3. Lingkaran\n");
            printf ("\t4. Trapesium\n");
            printf ("\t5. Keluar dari Program\n"); 

            printf("\nMasukkan pilihan anda : ");
            scanf ("%d", &pilih);
            switch (pilih)
            {
            case 1 : persegipanjang();
            {
                printf ("\nKembali ke Menu Utama? (Tekan Y/y untuk kembali) : ");
                scanf ("%c", &ulang); 
                scanf ("%c", &ulang);
            }
                break;
            case 2 : segitiga();
            {
                printf ("\nKembali ke Menu Utama? (Tekan Y/y untuk kembali) : ");
                scanf ("%c", &ulang); 
                scanf ("%c", &ulang);
            }
                break;
            case 3 : lingkaran();
            {
                printf ("\nKembali ke Menu Utama? (Tekan Y/y untuk kembali) : ");
                scanf ("%c", &ulang); 
                scanf ("%c", &ulang);
            }
                break;
            case 4 : trapesium();
            {
                printf ("\nKembali ke Menu Utama? (Tekan Y/y untuk kembali) : ");
                scanf ("%c", &ulang); 
                scanf ("%c", &ulang);
            }
                break;
            case 5 : keluar();
                return 0;
            default : printf ("Silahkan coba lagi! (Pilihlah angka dari 1-5)\n");
            system ("pause");
            system ("cls");
            goto TitikUtama;
            }
            system ("cls");
        }
        while 
        (ulang == 'Y'||ulang == 'y');

    }