#include <iostream>
#include <utility>  // Untuk menggunakan fungsi swap bawaan
using namespace std;

// Fungsi untuk menampilkan array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Cetak setiap elemen array
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array yang akan digunakan
    int n = sizeof(arr)/sizeof(arr[0]); // Hitung ukuran array

    cout << "Array sebelum penukaran: ";
    printArray(arr, n);  // Tampilkan array sebelum penukaran

    // Menukar elemen ke-2 (indeks 1) dan elemen ke-4 (indeks 3)
    int index1 = 1, index2 = 3;  // Indeks elemen yang akan ditukar
    cout << "\nMenukar elemen ke-" << index1 + 1 << " (" << arr[index1] << ") dan elemen ke-" << index2 + 1 << " (" << arr[index2] << ")\n";

    swap(arr[index1], arr[index2]);  // Gunakan fungsi swap bawaan

    cout << "\nArray setelah penukaran: ";
    printArray(arr, n);  // Tampilkan array setelah penukaran

    return 0;
}