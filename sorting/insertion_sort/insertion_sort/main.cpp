#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    // Loop untuk setiap elemen, dimulai dari elemen kedua (indeks 1)
    for (i = 1; i < n; i++) {
        key = arr[i]; // Simpan nilai elemen saat ini dalam key
        j = i - 1;    // Tentukan indeks sebelumnya dari elemen saat ini
        // Geser elemen-elemen yang lebih besar dari key ke kanan
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j]; // Geser elemen ke kanan
            j = j - 1;         // Pindah ke elemen sebelumnya
        }
        arr[j+1] = key; // Masukkan key ke posisi yang sesuai
        // Mencetak langkah pengurutan saat ini
        cout << "Step " << i << ": ";
        // Mencetak array setelah setiap langkah pengurutan
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl; // Pindah baris
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    return 0;
}
