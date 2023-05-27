#include <stdio.h>
#include <math.h>

void tambahBunga(int A, float i, int n);

int main() {
    int A, n;
    float i;

    printf("Masukkan jumlah uang Anda : Rp");
    scanf("%d", &A);

    printf("Masukkan jumlah bunga tahunan (dalam persen) : ");
    scanf("%f", &i);

    printf("Masukkan jumlah tahun (sejak anda menyimpan uang) : ");
    scanf("%d", &n);

    tambahBunga(A, i, n);

    return 0;
}


void tambahBunga(int A, float i, int n) {
    double F;
    float y = 0;
    float z = 1+(i/100);
  
    for (int i=1; i<=n; i++) {
        y = y + pow(z, i);
    }

    F = A * y;
    printf("Jumlah uang anda setelah %d tahun adalah = Rp%.2f\n", n, F);
}