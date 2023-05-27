// #include<stdio.h>

// int main(){
//     int i, jumkar = 0;
//     char teks[1000];

//     puts("Masukkan suatu kalimat (maks 1000 karakter).");
//     puts("Program ini akan mengitung jumlah karakter dari teks yang Anda masukkan");
//     fgets(teks, sizeof teks, stdin);
//     for(i=0; teks[i]; i++){
//         jumkar++;
//     }
//     printf("\nJumlah karakter = %d", jumkar);
// }

#include <stdio.h>
#include <string.h>

char teks[1000];

int main (){
    printf("Masukkan sebuah kalimat: ");
    gets(teks);
    // fgets(teks, sizeof teks, stdin);

    printf("Panjang kalimat: %d karakter\n", strlen(teks));
}