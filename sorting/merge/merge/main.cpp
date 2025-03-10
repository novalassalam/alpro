#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array yang sudah terurut
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Ukuran bagian kiri
    int n2 = right - mid;     // Ukuran bagian kanan

    // Buat array sementara untuk bagian kiri dan kanan
    int L[n1], R[n2];

    // Salin data ke array sementara
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gabungkan bagian kiri dan kanan ke dalam array utama
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen dari bagian kiri (jika ada)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen dari bagian kanan (jika ada)
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Tampilkan array setelah penggabungan
    cout << "Merged: ";
    for (int x = left; x <= right; x++) {
        cout << arr[x] << " ";
    }
    cout << endl;
}

// Fungsi rekursif untuk melakukan Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Hitung titik tengah

        // Tampilkan bagian yang sedang diproses
        cout << "Divide: ";
        for (int i = left; i <= right; i++) {
            cout << arr[i] << " ";
        }
        cout << " -> Left: ";
        for (int i = left; i <= mid; i++) {
            cout << arr[i] << " ";
        }
        cout << "| Right: ";
        for (int i = mid + 1; i <= right; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Urutkan bagian kiri dan kanan
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan bagian yang sudah terurut
        merge(arr, left, mid, right);
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Cetak setiap elemen array
    }
    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};  // Array yang akan diurutkan
    int n = sizeof(arr) / sizeof(arr[0]);     // Hitung ukuran array

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);  // Tampilkan array sebelum diurutkan

    cout << "\nProses Merge Sort ASC:\n";
    mergeSort(arr, 0, n - 1);  // Panggil fungsi Merge Sort

    cout << "\nArray setelah diurutkan: ";
    printArray(arr, n);  // Tampilkan array setelah diurutkan

    return 0;
}