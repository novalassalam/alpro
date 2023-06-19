#include <stdio.h>

// Definisikan struktur hitung dengan dua variabel integer x dan y
struct hitung {
    int x, y;
};

// Aliaskan struktur hitung menjadi operasi
typedef struct hitung operasi;
//typedef=> nama_struct => alias



// Deklarasikan variabel Jumlah dan Kali dengan tipe operasi
operasi Jumlah;
operasi Kali;

int main() {
    // Berikan nilai pada variabel Jumlah
    Jumlah.x = 5;
    Jumlah.y = 3;

    // Berikan nilai pada variabel Kali
    Kali.x = 2;
    Kali.y = 4;

    // Hitung hasil penjumlahan dan simpan dalam variabel hasilJumlah
    int hasilJumlah = Jumlah.x + Jumlah.y;

    // Hitung hasil perkalian dan simpan dalam variabel hasilKali
    int hasilKali = Kali.x * Kali.y;

    // Tampilkan hasil penjumlahan ke layar
    printf("Hasil Jumlah: %d\n", hasilJumlah);

    // Tampilkan hasil perkalian ke layar
    printf("Hasil Kali: %d\n", hasilKali);

    return 0;
}
