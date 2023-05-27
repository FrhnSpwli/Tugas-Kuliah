#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct jam
{
    int hh, mm, ss;
};
struct jam W1;
struct jam W2;
struct jam W3;

int durasi, pulsWil, tarifWil, biaya, pulsa;
char kodeWil[10];

int main (){
       
    printf("Masukkan Jam Awal Percakapan : ");
    scanf("%d, %d, %d", &W1.hh, &W1.mm, &W1.ss);
    
    printf("Masukkan Jam Akhir Percakapan : ");
    scanf("%d, %d, %d", &W2.hh, &W2.mm, &W2.ss);
    
    Kode:
    printf("Masukkan Kode Wilayah : ");
    scanf("%s", &kodeWil);

    if (W2.ss >= W1.ss)
    {
        W3.ss = W2.ss - W1.ss;
    }
    else
    {
        W3.ss = W2.ss + 60 - W1.ss;
        W2.mm = W2.mm - 1;
    }

    if (W2.mm >= W1.mm)
    {
        W3.mm = W2.mm - W1.mm;
    }
    else
    {
        W3.mm = W2.mm + 60 - W1.mm;
        W2.hh = W2.hh - 1;
    }

    W3.hh = W2.hh - W1.hh;

    durasi = (W3.hh * 3600) + (W3.mm * 60) + W3.ss;
    
    switch (atoi(kodeWil))
    {
    case 21:
        {
            pulsWil = 60;
            tarifWil = 150;
            break;
        }
    case 751:
        {
            pulsWil = 30;
            tarifWil = 250;
            break;
        }
    case 737:
        {
            pulsWil = 25;
            tarifWil = 375;
            break;
        }
    case 912:
        {
            pulsWil = 20;
            tarifWil = 415;
            break;
        }
    case 981:
        {
            pulsWil = 17;
            tarifWil = 510;
            break;
        }
    default:
        {
        printf("Kode Wilayah Anda Tidak Valid!\n");
	printf("Silahkan masukkan kembali\n");
        goto Kode;
        break;
        }
    }

    pulsa = durasi / pulsWil;
    biaya = pulsa * tarifWil;

    printf("Lama penggunaan %d jam, %d menit, %d detik\n", W3.hh, W3.mm, W3.ss);
    printf("Biaya : %d\n", biaya);

    return 0;
}