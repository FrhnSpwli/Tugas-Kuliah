#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_thread.h"

#define ARRAY_SIZE 1000

int sum[2];
int A[ARRAY_SIZE]; 

void *runner(void *params);

int main(int argc, char * args[]) {
    pthread_t tid[2]; 
    pthread_attr_t attr;
    
    if(argc < 2) { //jika jumlah argumen kurang dari 2, maka tampilkan pesan error
        fprintf(stderr,"Usage: multithreading <an integer value>\n"); 
        return -1;
    }
    if (atoi(args[1]) < 0) { //jika nilai argumen ke 1 kurang dari 0, maka tampilkan pesan error
        fprintf(stderr,"%d must be >= 0\n",atoi(args[1]));
        return -1;
    }

    int i, j;
    for (i = 0; i < ARRAY_SIZE; i++) { //mengisi array A dengan nilai i+1
        A[i] = i+1;
    }

    tls_t my_tls[2]; 
    my_tls[0].func = runner; 
    my_tls[0].thread_id = 0; 
    my_tls[0].args = (void*) A; 
    my_tls[1].func = runner;
    my_tls[1].thread_id = 1;
    my_tls[1].args = (void*) A;
    
    printf("I am the %ld from main function\n",pthread_self()); 
    pthread_attr_init(&attr); 
    
    for (j = 0; j < 2; j++) { //membuat thread baru
        pthread_create(&tid[j],&attr,runner,&my_tls[j]); //membuat thread baru dengan ID tid[j], atribut thread attr, fungsi runner, dan parameter my_tls[j]
        printf("I am the %ld from main function, creating thread %d\n",pthread_self(), j); //menampilkan pesan bahwa thread baru telah dibuat (tid[j]
    }
    
    for (j = 0; j < 2; j++) { //menunggu thread selesai
        pthread_join(tid[j], NULL); //menunggu thread dengan ID tid[j] selesai
        printf("I am the %ld from main function, thread %d has finished\n",pthread_self(), j); //menampilkan pesan bahwa thread dengan ID tid[j] telah selesai
    }
    
    //sum[0] adalah hasil penjumlahan array A dari indeks 0 sampai indeks 499
    //sum[1] adalah hasil penjumlahan array A dari indeks 500 sampai indeks 999
    printf("Total accumulation from thread 0 is %d\n", sum[0]);
    printf("Total accumulation from thread 1 is %d\n", sum[1]);
    printf("Total accumulation is %d\n", sum[0] + sum[1]);
    
    return 0;
}

void *runner(void *params) {
    int i, lower, upper, *arr;
    lower = ((tls_t *)params)->thread_id * (ARRAY_SIZE/2); //menghitung nilai lower, lower adalah nilai indeks array yang akan dihitung oleh thread
    upper = lower + (ARRAY_SIZE/2); //menghitung nilai upper, upper adalah nilai indeks array yang akan dihitung oleh thread
    arr = (int *)(((tls_t *)params)->args); //mengisi variabel arr dengan nilai array A
    sum[((tls_t *)params)->thread_id] = 0; //mengisi variabel sum dengan nilai 0
    printf("I am the %ld from runner %d, computing from index %d to %d\n",pthread_self(), ((tls_t *)params)->thread_id, lower, upper-1); //
    for(i=lower;i<upper;i++) {//menghitung nilai array A, nilai array A dihitung dari indeks lower sampai indeks upper
        sum[((tls_t *)params)->thread_id] += arr[i]; //menambahkan nilai array A ke variabel sum, sum adalah variabel yang digunakan untuk menyimpan hasil penjumlahan array A
        printf("I am the %ld from runner %d, the sum is %d\n",pthread_self(), ((tls_t *)params)->thread_id, sum[((tls_t *)params)->thread_id]); //menampilkan pesan bahwa thread telah menghitung nilai array A
    }
    pthread_exit(0); 
}
