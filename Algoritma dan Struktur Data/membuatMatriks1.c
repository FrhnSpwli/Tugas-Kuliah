#include <stdio.h>

int main()
{
   int baris, kolom, i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
 
   printf("Input jumlah baris matrik : "); scanf("%d", &baris);
   printf("Input jumlah kolom matrik : "); scanf("%d", &kolom);

   printf("nInput nilai matrik 1 :n");
   for (i = 0; i < baris; i++){
      for (j = 0; j < kolom; j++){
      printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
  scanf("%d",&matrik1[i][j]);
      }
   }
   
   printf("n Matrik 1 : n");
   for (i=0; i< baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik1[i][j]);
    }
    printf("n");
   }

   printf("nInput nilai matrik 2 :n");
   for (i = 0; i < baris; i++){    
      for (j = 0 ; j < kolom; j++){
    printf("Input Matriks 2[%d][%d]: ",i+1,j+1);
  scanf("%d",&matrik2[i][j]);
      }
   }
   
   printf("n Matrik 2 : n");
   for (i=0; i< baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik2[i][j]);
    }
    printf("n");
   }

   printf("\nHasil Penjumlahan Matrik :\n");
   for (i = 0; i < baris; i++) {
      for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
         printf("%d\t", jumlah[i][j]);
      }
      printf("\n");
   }
   printf("\n");

   return 0;
}