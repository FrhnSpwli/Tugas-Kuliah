/*
   Muh. Shobur Fattah
   D121211088
   FINAL
   File P2
*/
#include <stdio.h>

int factorial(int n) {
   int total = 1;

   for (int i=1; i<=n; i++) {
      total *= i; 
   }

   return total;
}

void fibbonacci(int n) {
   int fib = 0, fib2 = 0, fib3 = 0;

   for (int i=1; i<=n; i++) {         
      printf("%d ", fib);

      if (fib == 0) {
         fib++;
         continue;
      }

      fib3 = fib2;
      fib2 = fib;
      fib = fib2 + fib3 ;
   }
}

int main() {
   int n;
   int i;
   char c;

   ULANG:

   printf("Input n: ");
   fflush(stdin);
   scanf("%d", &n);

	printf("Factorial of %d: %d\n" , n , factorial(n));
   printf("Fibbonacci of %d: " , n);
	
   fibbonacci(n);

   printf("\n\n");
   do {
      printf("Ulangi program? (Y/N)=> "); fflush(stdin);
      scanf("%c", &c);

      if (c == 'y' || c == 'Y') {
         goto ULANG;
         printf("\n");
      } else if (c == 'n' || c == 'N') {
         printf("Keluar dari program\n");
         return 0;
      }

   } while (c != 'y' || c != 'Y' || c != 'n' || c != 'N');
}