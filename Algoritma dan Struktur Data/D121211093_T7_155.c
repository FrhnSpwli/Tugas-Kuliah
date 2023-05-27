#include <stdio.h>

typedef enum {false = 0, true = 1} bool;

void CariNilai(int A[], int x, int n, bool *ketemu, int *id) {
  int i = 0, j = n-1, k;

  while (!(*ketemu) && i<=j) {
    k = i + ((j - i) * (x - A[i])) / ((A[j] - A[i]));

    if (A[k] == x) {
      *ketemu = true;
      *id = k;
    } else if (A[k] > x) {
      i = k + 1;
    } else {
      j = k - 1;
    }
  }
}

int main() {

  bool ketemu = false;
  int n, x, id;

  printf("Tentukan banyak elemen: "); scanf("%d", &n);
  int A[n];

  printf("\nMasukkan nilai dengan urutan dari terkecil ke terbesar\n");
  for (int i=0; i<n; i++) {
    printf("Nilai A[%d] : ", i); scanf("%d", &A[i]);
  }

  printf("Nilai yang dicari dalam larik: "); scanf("%d", &x);

  CariNilai(A, x, n, &ketemu, &id);

  if (ketemu) {
    printf("Nilai %d terdapat di index ke-%d\n", x, id);
  } else {
    printf("Nilai %d tidak terdapat di larik!\n", x);
  }

  return 0;
}
