#include <iostream>
using namespace std;

// Fungsi untuk melakukan selection sort pada array arr dengan panjang n
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    // i Loop untuk setiap elemen kecuali elemen terakhir
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        // j Loop untuk mencari elemen terkecil dalam array yang belum diurutkan
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[min_idx]) {
                min_idx = j;
            }
        }
        // Menukar elemen terkecil dengan elemen pertama dalam bagian yang belum diurutkan
        swap(arr[min_idx], arr[i]);
        // Mencetak langkah pengurutan saat ini
        cout << "Step " << i+1 << ": ";
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
    selectionSort(arr, n);
    return 0;
}
