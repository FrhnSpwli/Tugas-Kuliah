/*
TUGAS 1. ALGORITMA DAN STRUKTUR DATA
NAMA : ANDI FARHAN SAPPEWALI
NIM  : D121211078
*/

// PROGRAM menghitung jarak
// Program untuk menghitung jarak yang ditempuh mobil

#include <stdio.h>

int main(){
  /* DEKLARASI */
  float v, t, s;  // v kecepatan, t waktu, dan s jarak 

  /* ALGORITMA */
  // input kecepatan mobil
  printf("Masukkan kecepatan mobil (km/jam): ");
  scanf("%f", &v);

  // input waktu yang ditempuh
  printf("Masukkan waktu yang ditempuh mobil (jam): ");
  scanf("%f", &t);

  // menghitung jarak yang ditempuh
  s = v * t;

  // menampilkan hasil
  printf("Jarak yang ditempuh: %.2f km\n", s);

  return 0;
}