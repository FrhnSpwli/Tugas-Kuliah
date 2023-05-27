//Nama : Andi Farhan Sappewali
//Nim : D121211078
//ALGORITMA DAN STRUKTUR DATA (FINAL TEST)

#include <stdio.h>

int factorial(int n) {
    int total = 1;

    for (int i=1; i<=n; i++) {
        total *= i; 
    }

    return total;
}

void fibbonacci(int n) {
    int fibonacci = 0, fibonacci2 = 0, fibonacci3 = 0;

    for (int i=1; i<=n; i++) {         
        printf("%d ", fibonacci);

        if (fibonacci == 0) {
        fibonacci++;
        continue;
        }

        fibonacci3 = fibonacci2;
        fibonacci2 = fibonacci;
        fibonacci = fibonacci2 + fibonacci3 ;
    }
}

int main() {
    int n;
    int i;
    char c;

    ulang:
    printf("Input n: ");
    fflush(stdin);
    scanf("%d", &n);

    printf("Factorial of %d: %d\n" , n , factorial(n));
    printf("Fibbonacci of %d: " , n);
	
    fibbonacci(n);

    printf("\n\n");
    do {
        printf("Ulangi program?(Y/N)"); fflush(stdin);
        scanf("%c", &c);

        if (c == 'y' || c == 'Y') {
        goto ulang;
        printf("\n");
        }
        else if (c == 'n' || c == 'N') {
        return 0;
        }
    } while (c != 'Y' || c != 'N' || c != 'y' || c != 'n');

}