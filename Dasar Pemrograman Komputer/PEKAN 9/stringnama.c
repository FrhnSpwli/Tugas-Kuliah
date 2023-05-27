#include <stdio.h>

int main (){
    char name[100];

    printf("\nMasukkan nama Anda: ");
    fgets(name, sizeof name, stdin);
    //bisa menggunakan scanf dan gets
    // scanf("\n%s", &name);
    //kekurangannya jika pake scanf, kita tidak bisa berikan spasi
    // gets(name);

    printf("\nHalo %s. Selamat Datang di kelas DPK.\n", name);
}