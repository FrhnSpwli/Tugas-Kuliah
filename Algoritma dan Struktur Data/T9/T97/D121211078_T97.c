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

typedef struct {
    char nama[50];
    char nim[20];
    float ip;
} Data3;

int main() {
    FILE *Arsip1 = fopen("Arsip1.bin", "rb");
    FILE *Arsip2 = fopen("Arsip2.bin", "rb");
    FILE *Arsip3 = fopen("Arsip3.bin", "wb");

    Data1 DataMhs1;
    Data2 DataMhs2;
    Data3 DataMhs3;

    printf("Menampilkan Data Arsip 1\n");
    printf("%-15s%-25s%-25s%-13s\n", "NIM", "Nama", "Alamat", "No HP");
    printf("=============  ======================   ====================     =============\n");
    fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    while(!feof(Arsip1)) {
        printf("%-15s%-25s%-25s%-15s\n", DataMhs1.nim, DataMhs1.nama, DataMhs1.alamat, DataMhs1.nomorTelepon);
        fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    }
    fclose(Arsip1);
    printf("\n");

    printf("Menampilkan Data Arsip 2\n");
    printf("%-15s%-15s%-4s\n", "NIM", "Jenis Kelamin", "IP");
    printf("=============  =============  ====\n");
    fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
    while(!feof(Arsip2)) {
        printf("%-15s%-15c%-13.2f\n", DataMhs2.nim, DataMhs2.jenisKelamin, DataMhs2.ip);
        fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
    }
    fclose(Arsip2);
    printf("\n");

    Arsip1 = fopen("Arsip1.bin", "rb");
    fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    while (!feof(Arsip1)) {
        Arsip2 = fopen("Arsip2.bin", "rb");
        fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
        while(!feof(Arsip2)){
            if (strcmp(DataMhs1.nim, DataMhs2.nim) == 0) {
                strcpy(DataMhs3.nim, DataMhs1.nim);
                strcpy(DataMhs3.nama, DataMhs1.nama);
                DataMhs3.ip = DataMhs2.ip;
                fwrite(&DataMhs3, sizeof(DataMhs3), 1, Arsip3);
                break;
            }
            fread(&DataMhs2, sizeof(DataMhs2), 1, Arsip2);
        }
        fclose(Arsip2);
        fread(&DataMhs1, sizeof(DataMhs1), 1, Arsip1);
    }
    fclose(Arsip1);
    fclose(Arsip3);

    Arsip3 = fopen("Arsip3.bin", "rb");
    printf("Menampilkan Data Arsip 3\n");
    printf("%-15s%-25s%-4s\n", "NIM", "Nama", "IP");
    printf("=============  ======================   ====\n");
    fread(&DataMhs3, sizeof(DataMhs3), 1, Arsip3);
    while(!feof(Arsip3)) {
        printf("%-15s%-25s%-13.2f\n", DataMhs3.nim, DataMhs3.nama, DataMhs3.ip);
        fread(&DataMhs3, sizeof(DataMhs3), 1, Arsip3);
    }
    fclose(Arsip3);
    return 0;
}