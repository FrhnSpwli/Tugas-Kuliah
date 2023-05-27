/*
Nama    = Andi Farhan Sappewali
Nim     = D121211078
Kelas   = Kelas C
DASAR PEMROGRAMAN
*/
#include <stdio.h>

int main (){
    char kalimat[1000];
    char *pkalimat;

    pkalimat = &kalimat[2];

    printf("\nMasukkan kalimat Anda: ");
    gets(kalimat);

    printf("Huruf ketiga dari %s adalah %c\n", kalimat, *pkalimat);

    return 0;
}