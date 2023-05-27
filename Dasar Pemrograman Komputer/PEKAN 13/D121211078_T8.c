/*
Nama    = Andi Farhan Sappewali
Nim     = D121211078
DASAR PEMROGRAMAN KOMPUTER (INFORMATIKA C)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *input_file;
	char buffer;
	
	input_file = fopen("result.dat", "r");
	
	if((input_file = fopen("result.dat", "r")) == NULL){
		printf("File tidak dapat diciptakan!\n\n");
		exit(1);
	} else{
		printf("File result.dat berhasil dibuka\n\n");
	}
	printf("Mengambil kalimat dari file result.dat: \n");
	while((buffer=fgetc(input_file)) != EOF){
		putchar(buffer);
	}
	printf("\n");
	printf("Menutup file result.dat\n");
	fclose(input_file);
	
	return 0;
}
