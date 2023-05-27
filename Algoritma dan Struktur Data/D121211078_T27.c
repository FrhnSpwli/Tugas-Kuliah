#include <stdio.h>

int main(){

    int saldo, setoran, penarikan, transaksi;
    enum boolean{false, true} bisatransaksi;

    printf("Masukkan Saldo Anda : Rp");
    scanf("%d", &saldo);

    bisatransaksi = true;

    while (bisatransaksi) {
        setoran = 0;
        penarikan = 0;
        printf("Sisa Saldo: Rp%d\n\n", saldo);
        printf("Kode Transaksi\n(0) Setor Tunai\n(1) Tarik Tunai");
        printf("\nMasukkan kode transaksi: ");
        scanf("%d", &transaksi);

        if(transaksi == 0){
            printf("\nTotal Setoran Tunai Anda: Rp");
            scanf("%d", &setoran);
            saldo += setoran;
        } else if(transaksi == 1){
            printf("\nTotal Penarikan Tunai Anda: Rp");
            scanf("%d", &penarikan);
            saldo -= penarikan;
        }

        if(saldo == 10000 || penarikan > saldo + penarikan){
            bisatransaksi = false;
        }

        if(saldo < 10000){
            printf("Transaksi Anda Gagal!\n");
            saldo += penarikan;
        }
    }

    printf("\nSisa Saldo: Rp%d\n", saldo);
    printf("Saldo Anda tidak memenuhi syarat untuk melanjutkan transaksi\n");
    return 0;
}