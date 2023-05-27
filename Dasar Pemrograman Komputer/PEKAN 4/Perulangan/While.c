#include <stdio.h>

int main ()
{
      int nilai, jumlah = 0;

      printf("Masukkan nilai: ");
      scanf("%i", nilai);

      do
      {
          printf("Perulangan %i\n", nilai);
          nilai++;
          jumlah++;
      } while (nilai < 10);
}
