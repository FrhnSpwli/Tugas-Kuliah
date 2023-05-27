#include <stdio.h>

int main (){
    //DEKLARASI
    int uang, saldo, saldoakhir, transaksi;
    
    //ALGORITMA
    fflush(stdin);
    printf("Masukkan saldo awal : ");
    scanf("%d", &saldo);
    printf("Total saldo anda : Rp%d", saldo);

    if(saldo <=10000){
        start1:
        printf("\nKode Transaksi\n");
        printf("0 = Untuk melakukan penyetoran tunai \n1 = Untuk melakukan penarikan tunai");   
        printf("\nMasukkan Kode Transaksi : ");
        scanf("%d", &transaksi);
        if(transaksi >= 2){
            printf("Kode yang anda masukkan tidak valid!");
            goto start1;
        }
        else{
            if(transaksi == 0){
                int setoran;
                printf("Masukkan jumlah penyetoran tunai anda : Rp");
                scanf("%d", &setoran);

                saldoakhir = saldo + setoran;
                printf("Saldo Akhir : Rp%d", saldoakhir);
            }
            else if (transaksi == 1){
                printf("Anda tidak dapat melakukan penarikan karena saldo anda tidak mencapai saldo minimum (saldo minimum setelah penarikan haruslah mencapai Rp10.000\n");
            }
        }
    }
    else{
        start:
        printf("\nKode Transaksi\n");
        printf("0 = Untuk melakukan penyetoran tunai \n1 = Untuk melakukan penarikan tunai");   
        printf("\nMasukkan Kode Transaksi : ");
        scanf("%d", &transaksi);
        if(transaksi >= 2){
            printf("Kode yang anda masukkan tidak valid!");
            goto start;
        }
        else{
            if(transaksi == 0){
                int setoran;
                printf("Masukkan jumlah penyetoran tunai anda : Rp");
                scanf("%d", &setoran);

                saldoakhir = saldo + setoran;
                printf("Saldo Akhir : Rp%d", saldoakhir);
            }
            else if (transaksi == 1){
                int tarikan;
                printf("Masukkan jumlah penarikan tunai anda : Rp");
                scanf("%d", &tarikan);

                saldoakhir = saldo - tarikan;
                printf("Saldo Akhir : Rp%d", saldoakhir);
            }
        }
    }
    return 0;
}