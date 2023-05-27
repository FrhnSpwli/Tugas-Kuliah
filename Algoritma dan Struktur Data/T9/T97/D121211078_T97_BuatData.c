#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nim[20];
    char nama[50];
    char alamat[50];
    char nomorTelepon[20];
} Data1;

typedef struct {
    char nim[20];
    char jenisKelamin;
    float ip;
} Data2;

int main(){
    Data1 DataMhs1;
    FILE *Arsip1 = fopen("Arsip1.bin", "wb");
    printf("Membaca Data Untuk Arsip 1\n");
    printf("NIM: "); gets(DataMhs1.nim); fflush(stdin);
    while (strcmp(DataMhs1.nim, "9999") != 0) {
        printf("Nama: "); gets(DataMhs1.nama); fflush(stdin);
        printf("Alamat: "); gets(DataMhs1.alamat); fflush(stdin);
        printf("No HP: "); gets(DataMhs1.nomorTelepon); fflush(stdin);
        fwrite(&DataMhs1, sizeof(DataMhs1), 1, Arsip1); 
        printf("\nNIM: "); gets(DataMhs1.nim); fflush(stdin);
    }

    Arsip1 = fopen("Arsip1.bin", "rb");
    fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    while(!feof(Arsip1)) {
        printf("NIM: %s\nNama: %s\n\n", DataMhs1.nim, DataMhs1.nama);
        fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    }
    fclose(Arsip1);

    Data2 DataMhs2;
    FILE *Arsip2 = fopen("Arsip2.bin", "wb");
    printf("\nMembaca Data Untuk Arsip 2\n");
    printf("NIM: "); gets(DataMhs2.nim);
    while (strcmp(DataMhs2.nim, "9999") != 0) {
        fflush(stdin);
        printf("Jenis Kelamin : "); scanf("%c", &DataMhs2.jenisKelamin); fflush(stdin);
        printf("IP : "); scanf("%f", &DataMhs2.ip); fflush(stdin);
        fwrite(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
        printf("\nNIM: "); gets(DataMhs2.nim); fflush(stdin);
    }
    
    Arsip2 = fopen("Arsip2.bin", "rb");
    fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
    while(!feof(Arsip2)) {
        printf("NIM: %s\nIP: %.2f\n\n", DataMhs2.nim, DataMhs2.ip);
        fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
    }
    fclose(Arsip2);
    return 0; 
}