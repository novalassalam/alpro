#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

// Definisikan struktur pekerja dengan dua variabel, id (integer) dan nama (array karakter)
typedef struct pekerja {
    int id;
    char nama[20];
} emp; //alias

int main() {
    // Deklarasikan array data dengan tipe emp untuk menyimpan data pekerja
    emp data[2];

    // Isi data pekerja pertama
    strcpy(data[0].nama, "Maxidena");
    data[0].id = 0001;

    // Isi data pekerja kedua
    strcpy(data[1].nama, "Rhyne");
    data[1].id = 0002;

    int x;

    // Loop melalui array data dan tampilkan id dan nama setiap pekerja
    for (x = 0; x < 2; x++) {
        cout << data[x].id << " " << data[x].nama << endl;
    }

    return 0;
}
