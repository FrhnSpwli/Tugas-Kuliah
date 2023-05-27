#ifndef MY_THREAD_LIB //jika MY_THREAD_LIB belum didefinisikan, maka definisikan MY_THREAD_LIB
#define MY_THREAD_LIB 

#include <pthread.h> //menggunakan library pthread.h

typedef void * (*cfunc)(); //deklarasi fungsi cfunc, fungsi ini mengembalikan pointer void

typedef struct thread_local_storage { //deklarasi struct thread_local_storage, struct adalah tipe data yang digunakan untuk menyimpan data yang berbeda tipe
     int thread_id;
     cfunc func;
     void *args;
     pthread_t tid;
} tls_t; //deklarasi variabel tls_t bertipe struct thread_local_storage



#endif