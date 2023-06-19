#include <iostream>

// Mendefinisikan struktur data Mahasiswa
struct Mahasiswa {
    std::string nama;
    int usia;
};

int main() {
    // Membuat array struktur Mahasiswa dengan menggunakan pointer
    Mahasiswa* mahasiswaArray = new Mahasiswa[5];

    // Mengisi data ke dalam array struktur menggunakan pointer
    mahasiswaArray[0] = {"John Doe", 20};
    mahasiswaArray[1] = {"Jane Smith", 21};
    mahasiswaArray[2] = {"Alice Johnson", 19};
    mahasiswaArray[3] = {"Bob Anderson", 22};
    mahasiswaArray[4] = {"Eva Brown", 20};

    // Mengakses dan mencetak data dari array struktur menggunakan pointer
    for (int i = 0; i < 5; i++) {
        std::cout << "Mahasiswa " << i + 1 << ": " << mahasiswaArray[i].nama
                  << ", Usia: " << mahasiswaArray[i].usia <<
        ", Alamat: "<< &mahasiswaArray[i]<<
        std::endl;
    }

    // Menghapus memori yang dialokasikan untuk array struktur
    delete[] mahasiswaArray;

    return 0;
}
