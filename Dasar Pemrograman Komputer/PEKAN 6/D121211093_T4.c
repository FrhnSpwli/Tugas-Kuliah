#include <stdio.h>
#include <stdlib.h> // system("clear");
#include <conio.h>  // getch();


// prototipe fungsi
float hitungPersegiPanjang(float panjang, float lebar);
float hitungSegiTiga(float tinggi, float alas, float s1, float s2);
float hitungLingkaran(float jariJari);
float hitungTrapesium(float sisiAtas, float sisiBawah, float tinggi, float sisiMiringKanan, float sisiMiringKiri);

int main(void) {
	// pendeklarasian variabel
	int menu, n;
	float panjang, lebar, tinggi, alas, jariJari, sisiAtas, sisiBawah;
	float sisiMiringKanan, sisiMiringKiri;
	int start = 1;
	char c;

	//pengulangan program
	while(start) {
		
		menu = 0;

		// pilih menu
		menu = 
		printf("\nDaftar menu luas & keliling:\n1. Persegi Panjang \n2. Segi Tiga \n3. Lingkaran \n4. Trapesium \n5. Keluar \nPilih Nomor Menu: ");
		scanf("%d", &menu);
		
		// jika yang dipilih persegi panjang
		if( menu == 1 ) {
			printf("Panjang Persegi: "); scanf("%f", &panjang);
			printf("Lebar Persegi: "); scanf("%f", &lebar);
			hitungPersegiPanjang(panjang, lebar);
		}
		// jika yang dipilih segi tiga
		else if( menu == 2 ) {
			printf("Nilai Tinggi: "); scanf("%f", &tinggi);
			printf("Nilai Alas: "); scanf("%f", &alas);
			printf("Nilai Sisi Kanan: "); scanf("%f", &sisiMiringKanan);
			printf("Nilai Sisi Kiri: "); scanf("%f", &sisiMiringKiri);
			hitungSegiTiga(tinggi, alas, sisiMiringKanan, sisiMiringKiri);
		}
		// jika yang dipilih lingkaran
		else if( menu == 3 ) {
			printf("Nilai Jari-jari: "); scanf("%f", &jariJari);		
			hitungLingkaran(jariJari);
		}
		// jika yang dipilih trapesium
		else if( menu == 4 ) {
			printf("Panjang Sisi Atas: "); scanf("%f", &sisiAtas);
			printf("Panjang Sisi Bawah: "); scanf("%f", &sisiBawah);
			printf("Tinggi Trapesium: "); scanf("%f", &tinggi);
			printf("Nilai Sisi Kanan: "); scanf("%f", &sisiMiringKanan);
			printf("Nilai Sisi Kiri: "); scanf("%f", &sisiMiringKiri);
			hitungTrapesium(sisiAtas, sisiBawah, tinggi, sisiMiringKanan, sisiMiringKiri);
		}
		// jika yang dipilih keluar dari program
		else if( menu == 5 ) {
			printf("Sampai Jumpa Kembali!");
			
			break;
		} else {
			printf("\nMasukkan angka sesuai dengan menu yang tersedia! \n");
		}
		printf("Bersihkan layar? y/n: "); c = getch();

		if(c == 'y') {
			system("cls");	
		}
	}

	system("cls");
	return 0;
}

// fungsi persegi panjang
float hitungPersegiPanjang(float panjang, float lebar) {
	float luas = panjang * lebar;
	float keliling = 2 * (panjang + lebar);
	printf("\nLuas Persegi Panjang: %.2f\n", luas);
	printf("Keliling Persegi Panjang: %.2f\n", keliling); 
}

// fungsi segi tiga
float hitungSegiTiga(float tinggi, float alas, float s1, float s2) {
	float luas = (0.5 * alas * tinggi);
	float keliling = s1 + s2 + alas;
	printf("\nLuas Segi Tiga: %.2f\n", luas);
	printf("Keliling Segi Tiga: %.2f\n", keliling); 
}

// fungsi lingkaran
float hitungLingkaran(float jariJari) {
	float luas = (3.14 * jariJari * jariJari);
	float keliling = 2 * 3.14 * jariJari;
	printf("\nLuas Lingkaran: %.2f\n", luas);
	printf("Keliling Lingkaran: %.2f\n", keliling); 
}

// fungsi trapesium
float hitungTrapesium(float sisiAtas, float sisiBawah, float tinggi, float sisiMiringKanan, float sisiMiringKiri) {
	float luas = (0.5 * (sisiAtas + sisiBawah) * tinggi);
	float keliling = sisiAtas + sisiBawah + sisiMiringKanan + sisiMiringKiri;
	printf("\nLuas Trapesium: %.2f\n", luas);
	printf("Keliling Trapesium: %.2f\n", keliling); 

	return luas;
}
