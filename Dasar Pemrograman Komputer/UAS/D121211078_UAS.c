#include <stdio.h>
#include <stdlib.h>

int main (){
    float upah_buruh;
    int jumlah_jam;
    char ulang, nama_buruh[100];
    
    mulai:
    fflush(stdin);
    printf("================================================\n");
    printf("Program Gaji Buruh (Perusahaan Bakti Utama Jaya)\n");
    printf("================================================\n");
    printf("Masukkan nama buruh : ");
    gets(nama_buruh);
    printf("Masukkan jumlah jam : ");
    scanf("%d", &jumlah_jam);
    
    if (jumlah_jam <= 40)
    {
        upah_buruh = 5000 + (jumlah_jam * 300) + (6 * 100);
        printf("Upah buruh adalah Rp%.2f", upah_buruh);
    }
    else if (jumlah_jam > 40 && jumlah_jam <= 60)
    {
        upah_buruh = 5000 + (jumlah_jam * 300) + (6 * 100) + ((jumlah_jam-40) * 300);
        printf("Upah buruh adalah Rp%.2f", upah_buruh);
    }
    else if (jumlah_jam > 60)
    {
        upah_buruh = 5000 + (jumlah_jam * 300) + (6 * 100) + ((jumlah_jam-40) * 300) + ((jumlah_jam-60) * 500);
        printf("Upah buruh adalah Rp%.2f", upah_buruh);
    }
    ulang:
    fflush(stdin);
    printf("\nUlang?(y/t)");
    scanf("%c", &ulang);
    if ((ulang == 'Y')||(ulang == 'y'))
    {
        goto mulai;
    }
    else if ((ulang == 'T')||(ulang == 't'))
    {
        system ("pause");
        system ("cls");
        return 0;
        
    }
    else
    {
        printf("Masukan anda salah!\n");
        goto ulang;
    }
    return 0;
}

