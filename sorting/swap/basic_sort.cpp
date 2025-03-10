#include <iostream>
#include <utility>  // Untuk menggunakan fungsi swap bawaan
using namespace std;

int main() {
    int arr[] = {1, 2, 0};  // Array yang akan diproses
    int n = sizeof(arr) / sizeof(arr[0]);  // Hitung ukuran array

    cout << "Array sebelum ditukar: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Tampilkan array sebelum penukaran
    }
    cout << endl;

    // Loop untuk membandingkan dan menukar elemen
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // Jika elemen saat ini lebih besar dari elemen berikutnya
            swap(arr[i], arr[i + 1]);  // Tukar posisi elemen
            cout << "Tukar " << arr[i + 1] << " dan " << arr[i] << ": ";
            cout << endl;
        }else{
            cout << "Ajeg " << arr[i + 1] << " dan " << arr[i] << ": ";
            cout << endl;
        }

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";  // Tampilkan array setelah penukaran
        }
        cout << endl;
    }

    cout << "Array setelah ditukar: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Tampilkan array setelah semua penukaran
    }
    cout << endl;

    return 0;
}