#include <stdio.h>

int main(){

  int saldo, setorTunai, tarikTunai, kodeTransaksi;
  enum boolean{false, true} bisaTransaksi;

  saldo = 50000;
  bisaTransaksi = true;

  while (bisaTransaksi) {
    setorTunai = 0;
    tarikTunai = 0;
    printf("Sisa Saldo: Rp%d\n", saldo);
    printf("Masukkan kode transaksi: ");
    scanf("%d", &kodeTransaksi);

    if(kodeTransaksi == 0){
      printf("Jumlah Setoran: Rp");
      scanf("%d", &setorTunai);
      saldo += setorTunai;
    } else if(kodeTransaksi == 1){
      printf("Jumlah Tarik Tunai: Rp");
      scanf("%d", &tarikTunai);
      saldo -= tarikTunai;
    }

    if(saldo == 10000 || tarikTunai > saldo + tarikTunai){
      bisaTransaksi = false;
    }

    if(saldo < 10000){
      printf("Transaksi Gagal!\n");
      saldo += tarikTunai;
    }
  }

  printf("\nSisa Saldo: Rp%d\n", saldo);
  printf("Anda tidak memenuhi syarat untuk melanjutkan transaksi\n");
  return 0;
}