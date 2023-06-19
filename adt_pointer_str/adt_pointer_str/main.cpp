#include <iostream>
#include <string>

using namespace std;

// Definisikan struktur dengan pointer ke string
struct Pekerja {
    int id;
    string* nama;
};

int main() {
    // Deklarasi variabel dengan tipe struktur
    Pekerja pekerja;

    // Inisialisasi nilai pada variabel
    pekerja.id = 1;
    pekerja.nama = new string("Maxidena");

    // Mengakses dan mengubah nilai melalui pointer
    *pekerja.nama = "John Doe";

    // Menampilkan nilai melalui pointer
    cout << "ID: " << pekerja.id << endl;
    cout << "Nama: " << *pekerja.nama << endl;

    return 0;
}
