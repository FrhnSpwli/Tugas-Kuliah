#include <stdio.h>

struct Nilai{
    int SKS;
    int indeksNilai;
};

void JumlahNilai(int m, int n, struct Nilai NilaiMhs[m][n], float NR[]) {
    float sigma1 = 0, sigma2 = 0;

    for (int i=0; i<m; i++) {
        printf("\nData Mahasiswa %d\n", i+1);
        for (int j=0; j<n; j++) {
            ulang:
            fflush(stdin);
            printf("Indeks Nilai Mata Kuliah %d (A/B/C/D/E): ", j+1);
            scanf("%c", &NilaiMhs[i][j].indeksNilai);
            fflush(stdin);

        switch (NilaiMhs[i][j].indeksNilai) {
            case 'A':
            case 'a':
            NilaiMhs[i][j].indeksNilai = 4;
            break;
            case 'B':
            case 'b':
            NilaiMhs[i][j].indeksNilai = 3;
            break;
            case 'C':
            case 'c':
            NilaiMhs[i][j].indeksNilai = 2;
            break;
            case 'D':
            case 'd':
            NilaiMhs[i][j].indeksNilai = 1;
            break;
            case 'E':
            case 'e':
            NilaiMhs[i][j].indeksNilai = 0;
            break;
            default:
            goto ulang;
        }

        printf("SKS Mata Kuliah %d: ", j+1);
        scanf("%d", &NilaiMhs[i][j].SKS);
        fflush(stdin);
        sigma1 = sigma1 + (NilaiMhs[i][j].indeksNilai * NilaiMhs[i][j].SKS);
        sigma2 = sigma2 + NilaiMhs[i][j].SKS;
        }
        NR[i] = sigma1 / sigma2 ;
    }
    printf("\n");
}

    int main() {
    int m, n;

    printf("Jumlah Mahasiswa: ");
    scanf("%d", &m);

    printf("Jumlah Mata Kuliah: ");
    scanf("%d", &n);

    float NR[m];
    struct Nilai NilaiMhs[m][n];

    JumlahNilai(m, n, NilaiMhs, NR);

    for (int i=0; i<m; i++) {
        printf("Nilai rata-rata Mahasiswa %d: %.2f\n", i+1, NR[i]);
    }

    return 0;
}