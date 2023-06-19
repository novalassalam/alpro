#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


// Definisikan struktur pekerja dengan dua variabel, id (integer) dan nama (array karakter)
typedef struct pekerja {
    int id;
    char nama[20];
} emp;

int main() {
    emp data = {0, 0};  // Deklarasi dan inisialisasi variabel data dengan nilai awal 0
    emp *pdata;         // Membuat pointer dari tipe struktur pekerja

    pdata = &data;      // Memberikan alamat variabel data ke pointer pdata

    // Menyalin string "Maxidena" ke variabel nama menggunakan pointer pdata
    strcpy(pdata->nama, "Maxidena");

    pdata->id = 0001;   // Memberikan nilai 0001 ke variabel id menggunakan pointer pdata

    // Menampilkan nilai id dan nama menggunakan pointer pdata

    cout << pdata->id << " " << pdata->nama << endl;
    return 0;
}
