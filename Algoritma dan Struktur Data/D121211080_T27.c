#include <stdio.h>

int main() {
	int pilih, saldo = 0;
	int transaksi; //transaksi digunakan untuk menampung jumlah penarikan atau penyetoran
	char repeat;
	do {
		printf("Silakan memasukkan kode transaksi:\n0. Setor Tunai\n1. Tarik Tunai \n");
		printf("Kode Transaksi : ");
		scanf("%d", &pilih);
		printf("\n");
		switch (pilih) {
			case 0:
			printf("Masukkan Jumlah Uang yang ingin disetor: ");
			scanf("%d", &transaksi);
			saldo += transaksi;
			printf("Transaksi Berhasil\n");
			break;
			case 1:
			printf("Masukkan Jumlah Uang yang Ingin Ditarik: ");
			scanf("%d", &transaksi);
			if (saldo + 10000 < transaksi || saldo <= 10000) {
				printf("Saldo Anda tidak mencukupi");
				return 0;
			}
			else {
				saldo -= transaksi;
				printf("Transaksi Berhasil!\n");
			}
			break;
			default:
			printf("Pilihan Anda tidak valid!");
			return 0;
		}
		printf("Sisa saldo: %d\n\n", saldo);
		fflush(stdin);
		printf("Apakah Anda Ingin Melakukan Transaksi Lagi? (Y/y) "); scanf("%[^\n]", &repeat);
	} while (repeat == 'Y' || repeat == 'y');

	return 0;
}