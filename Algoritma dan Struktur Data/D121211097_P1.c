//Nama: nadya petroya sadi
//NIM: D121211097
//FINAL TEST

#include <stdio.h>

int factorial(int n) {
    //base case
    if ( n == 0 ) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int fibbonacci(int n) {
    if(n==0) {
      return 0;
    } else if (n==1){
        return 1;
    } else{
        return (fibbonacci(n-1) + fibbonacci(n-2));
    }
}

int main(){
    int n;
    int i;
    char pilih;

    while(1){
        printf("Input Bilangan: ");
        scanf("%d", &n);
        printf("Factorial of %d: %d\n", n, factorial(n));
        printf("Fibbonacci of %d: ", n);
    
        for(i=0;i<n;i++) {
        printf("%d ", fibbonacci(i));
    }
    fflush(stdin);
    printf("\nLanjut Y/N?");
        scanf("%c", &pilih);

        if (pilih == 'Y' || pilih == 'y'){
            continue;
        } else if (pilih == 'N' || pilih == 'n'){
            printf("Program berhenti.");
            return 0;
        }
        printf("\n");
    }
}