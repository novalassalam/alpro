#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string data;

public:
    // Constructor
    Mahasiswa(string _nama, string _nim) : nama(_nama), nim(_nim) {}

    // Method untuk menambahkan data
    void tambahData(string _data) {
        data = _data;
    }

    // Method untuk menampilkan data mahasiswa
    void tampilkanData() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Membuat objek dari class Mahasiswa
    Mahasiswa mahasiswa1("Budi", "12345");
    Mahasiswa mahasiswa2("Citra", "67890");

    // Menambahkan data ke objek
    mahasiswa1.tambahData("IPK: 3.5");
    mahasiswa2.tambahData("IPK: 3.8");

    // Menampilkan data dari objek
    cout << "Mahasiswa 1:" << endl;
    mahasiswa1.tampilkanData();
    cout << endl << "Mahasiswa 2:" << endl;
    mahasiswa2.tampilkanData();

    return 0;
}
