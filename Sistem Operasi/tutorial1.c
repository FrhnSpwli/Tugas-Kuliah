// #include <pthread.h> //menggunakan library pthread.h
// #include <stdio.h>
// #include <stdlib.h>
// #include "my_thread.h" //menggunakan library my_thread.h

// int sum;
// void *runner(void *params); //deklarasi fungsi runner

// int main(int argc, char * args[]) { //fungsi utama dengan parameter argc dan args
//     pthread_t tid; //deklarasi variabel tid bertipe pthread_t, pthread_t adalah tipe data yang digunakan untuk menyimpan ID thread
//     pthread_attr_t attr; //deklarasi variabel attr bertipe pthread_attr_t, pthread_attr_t adalah tipe data yang digunakan untuk menyimpan atribut thread
//     if(argc < 2) { //jika argc kurang dari 2, argc adalah jumlah argumen yang diberikan ke program
//         fprintf(stderr,"Usage a.out <an integer value>\n"); //mencetak pesan error
//         return -1; //mengembalikan nilai -1
//     }
//     if (atoi(args[1]) < 0) { //jika nilai args[1] kurang dari 0, atoi adalah fungsi untuk mengubah string menjadi integer, args[1] adalah argumen ke 1
//         fprintf(stderr,"%d must be >= 0\n",atoi(args[1])); //mencetak pesan error
//         return -1; //mengembalikan nilai -1
//     }
//     tls_t my_tls[2]; //deklarasi variabel my_tls bertipe tls_t dengan ukuran 2, tls_t adalah tipe data yang digunakan untuk menyimpan thread local storage
//     my_tls[0].func = runner; //menyimpan fungsi runner ke my_tls[0].func
//     my_tls[0].thread_id = 0; //menyimpan nilai 0 ke my_tls[0].thread_id
//     my_tls[0].tid = pthread_self(); //menyimpan nilai pthread_self() ke my_tls[0].tid, pthread_self() adalah fungsi untuk mendapatkan ID thread

//     printf("I am the %ld from main function\n",pthread_self()); 
//     pthread_attr_init(&attr); //menginisialisasi atribut thread, pthread_attr_init adalah fungsi untuk menginisialisasi atribut thread
//     pthread_create(&tid,&attr,runner,args[1]); //membuat thread baru, pthread_create adalah fungsi untuk membuat thread baru, &tid adalah alamat variabel tid, &attr adalah alamat variabel attr, runner adalah fungsi yang akan dijalankan, args[1] adalah argumen ke 1
//     *runner(args[1]); //memanggil fungsi runner dengan argumen args[1]
//     pthread_join(tid,NULL); //menunggu thread selesai, pthread_join adalah fungsi untuk menunggu thread selesai

// }
// void *runner(void *params) { //fungsi runner dengan parameter params
//     int i, upper = atoi(params); //deklarasi variabel i dan upper bertipe integer, atoi adalah fungsi untuk mengubah string menjadi integer, params adalah argumen ke 1
//     sum = 0; //menyimpan nilai 0 ke variabel sum
//     printf("I am the %ld from runner\n",pthread_self()); 
//     for(i=1;i<=upper;i++) //perulangan for dengan nilai awal i=1, nilai akhir i=upper, dan nilai increment i=i+1
//        sum += i; //menyimpan nilai sum + i ke variabel sum
//     pthread_exit(0); //keluar dari thread, pthread_exit adalah fungsi untuk keluar dari thread
// }

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_thread.h"

#define ARRAY_SIZE 1000

int sum;
void *runner(void *params);

int main(int argc, char * args[]) {
    pthread_t tid;
    pthread_attr_t attr;
    if(argc < 2) {
        fprintf(stderr,"Usage a.out <an integer value>\n");
        return -1;
    }
    if (atoi(args[1]) < 0) {
        fprintf(stderr,"%d must be >= 0\n",atoi(args[1]));
        return -1;
    }
    int A[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        A[i] = i + 1;
    }
    tls_t my_tls[2];
    my_tls[0].func = runner;
    my_tls[0].thread_id = 0;
    my_tls[0].tid = pthread_self();

    printf("I am the %ld from main function\n",pthread_self());
    pthread_attr_init(&attr);
    pthread_create(&tid,&attr,runner,A);
    *runner(A);
    pthread_join(tid,NULL);

    printf("Sum of array elements: %d\n", sum);
    return 0;
}

void *runner(void *params) {
    int *A = (int *) params;
    sum = 0;
    printf("I am the %ld from runner\n",pthread_self());
    for(int i = 0; i < ARRAY_SIZE; i++) {
       sum += A[i];
    }
    pthread_exit(0);
}
