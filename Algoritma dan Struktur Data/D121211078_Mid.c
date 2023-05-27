#include <stdio.h>
#include <stdlib.h>
//D121211078
//Andi Farhan Sappewali

int main()
{
    int A[5];
    int B[5];
    int C[5];
    int SUM=0;

    float RATA;

    printf("MASUKKAN ELEMEN MATRIKS\n");
//BARIS A 
    printf("Masukkan elemen baris pertama\n");
    for(int i=0 ; i<5;i++){
        printf("\tMasukkan elemen A-%d:",i+1);scanf("%d",&A[i]);
    }

    //mencetak array
    printf("Isi Elemen Array-A:\n");
    for(int i=0 ; i<5;i++){
        printf("%d\t",A[i]);
    }
    printf("\n\n");

//BARIS B
    printf("Masukkan elemen baris kedua\n");
    for(int i=0 ; i<5;i++){
        printf("\tMasukkan elemen B-%d:",i+1);scanf("%d",&B[i]);
    }

    //mencetak array b
    printf("Isi Elemen Array-B:\n");
    for(int i=0 ; i<5;i++){
        printf("%d \t",B[i]);
    }
    printf("\n\n");

//BARIS C

    printf("Masukkan elemen baris ketiga\n");
    for(int i=0 ; i<5;i++){
        printf("\tMasukkan elemen C-%d:",i+1);scanf("%d",&C[i]);
    }
    //mencetak array c
    printf("Isi Elemen Array-C:\n");
    for(int i=0 ; i<5;i++){
        printf("%d \t",C[i]);
    }
    printf("\n\n");

    //INPUT ARRAY KE MATRIKS C
    void matriksD(){
    printf("Matriks D: \n");

    for(int i=0 ; i<5;i++){
        printf("%d\t",A[i]);
        }
        printf("\n");
    for(int i=0 ; i<5;i++){
        printf("%d\t",B[i]);
        }printf("\n");
    for(int i=0 ; i<5;i++){
        printf("%d\t",C[i]);
        }

    }

    printf("\n\n");
    matriksD();

    //menjumlahkan array dan rata rata elemen matriks

    for(int i=0 ; i<5;i++){
    SUM=SUM+A[i];
    }
    for(int i=0 ; i<5;i++){
    SUM=SUM+B[i];
    }
    for(int i=0 ; i<5;i++){
    SUM=SUM+C[i];
    }
    RATA=(float)SUM/15;
    printf("\n\nJumlah TOTAL\t\t:%d",SUM);
    printf("\nJumlah Rata Rata\t: %g",RATA);

}
