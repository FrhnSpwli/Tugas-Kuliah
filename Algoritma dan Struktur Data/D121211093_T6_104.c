#include <stdio.h>
#include <math.h>

void tambahBunga(int A, float i, int n);

int main() {
  int A, n;
  float i;

  printf("Jumlah tabungan di awal tahun: Rp. ");
  scanf("%d", &A);

  printf("Jumlah bunga: ");
  scanf("%f", &i);

  printf("Lama menabung(tahun): ");
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
  printf("Nilai F = Rp. %.2f\n", F);
}