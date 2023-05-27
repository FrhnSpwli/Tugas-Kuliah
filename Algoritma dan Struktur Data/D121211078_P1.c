//Nama : Andi Farhan Sappewali
//Nim : D121211078
//ALGORITMA DAN STRUKTUR DATA (FINAL TEST)

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
   //base case
    if(n == 0) {
        return 1;
    }   
    else {
        return n * factorial(n-1);
    }
}

int fibbonacci(int n) {
    if(n == 0){
        return 0;
    }    
    else if(n == 1) {
        return 1;
    }   
    else {
        return (fibbonacci(n-1) + fibbonacci(n-2));
    }
}

int main() {
    int n;
    int i;
    char ulang;
    
    mulai:
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Factorial of %d: %d\n" , n , factorial(n));
        printf("Fibbonacci of %d: " , n);
	
    for(i = 0;i<n;i++) {
        printf("%d ",fibbonacci(i));            
    }

    ulang:
    fflush(stdin);
    printf("\nUlang?(Y/N)");
    scanf("%c", &ulang);
    if ((ulang == 'Y')||(ulang == 'y'))
    {
        goto mulai;
    }
    else if ((ulang == 'N')||(ulang == 'n'))
    {
        return 0;
        
    }
    else
    {
        printf("Masukan anda salah!\n");
        goto ulang;
    }
    return 0;
}