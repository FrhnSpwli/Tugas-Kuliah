#include "my_thread.h" //menggunakan library my_thread.h

int am_i_master(tls_t thread) { //fungsi am_i_master dengan parameter thread bertipe tls_t, tls_t adalah tipe data yang digunakan untuk menyimpan thread local storage
    return thread.tid == 0; //mengembalikan nilai thread.tid == 0, thread.tid adalah ID thread, 0 adalah ID thread utama, jika thread.tid == 0 maka mengembalikan nilai true, jika tidak maka mengembalikan nilai false
}