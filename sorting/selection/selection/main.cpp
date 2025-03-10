#include <iostream>
using namespace std;

// Fungsi prosedur untuk menampilkan array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Cetak setiap elemen array
    }
    cout << endl;
}

// Fungsi prosedur untuk melakukan Selection Sort dan menampilkan step perpindahan
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {          // Loop untuk setiap elemen
        int minIndex = i;                    // Asumsikan elemen terkecil adalah elemen ke-i
        for (int j = i+1; j < n; j++) {     // Cari elemen terkecil dari sisa array
            if (arr[j] < arr[minIndex]) {
                minIndex = j;               // Update indeks elemen terkecil
            }
        }
        if (minIndex != i) {                 // Jika elemen terkecil bukan elemen ke-i
            cout << "   Tukar " << arr[i] << " dan " << arr[minIndex] << ": ";
            swap(arr[i], arr[minIndex]);     // Tukar elemen menggunakan swap bawaan
            printArray(arr, n);             // Tampilkan array setelah penukaran
        }
    }
}
int main() {
    int arr[] = {64 , 34 ,25 ,12 ,22 ,11 ,90};  // Array yang akan diurutkan
    int n = sizeof(arr)/sizeof(arr[0]); // Hitung ukuran array

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);  // Tampilkan array sebelum diurutkan

    cout << "\nProses Selection Sort ASC:\n";
    selectionSort(arr, n);  // Panggil fungsi Selection Sort

    cout << "\nArray setelah diurutkan: ";
    printArray(arr, n);  // Tampilkan array setelah diurutkan

    return 0;
}