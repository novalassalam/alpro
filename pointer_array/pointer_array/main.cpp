//
//  main.cpp
//  pointer_array
//
//  Created by Mac on 03/06/23.
//  Copyright © 2023 Mac. All rights reserved.
//


#include <iostream>
using namespace std;

void pointer_biasa(){
    int angka = 10;
    int *ptr = &angka;
    int nilai = *ptr;  // Memanggil pointer tanpa &
    cout << "ptr "<<*ptr << endl;  // Output: 10
    cout << "nilai "<<nilai << endl;  // Output: 10

}
void p_array(){
    int angka[5] = {10, 20, 30, 40, 50};
    int *ptr = angka;  // Menginisialisasi pointer dengan nama array

    // Mengakses elemen array menggunakan pointer
    cout << "akses value "<<*ptr << endl;  // Output: 10
    // Mengakses alamat variabel menggunakan pointer
    cout << "akses alamat angka "<<ptr << endl;
    // Mengakses alamat array menggunakan pointer
    cout << "akses alamat pointer "<<&ptr << endl;

}

void operasi_array(){
    int angka[5] = {10, 20, 30, 40, 50};
    int *ptr = angka;  // Menginisialisasi pointer dengan nama array
    int *pointerToIndex3 = ptr + 3; // Mendapatkan pointer ke elemen indeks 3
    
    cout <<"kondisi awal : "<< *ptr << endl;  // Output: 20
    ptr++;  // Memindahkan pointer ke elemen berikutnya
    cout <<"kondisi akhir : " << *ptr << endl;  // Output: 20
    cout <<"index ke 3 :  " << *pointerToIndex3 << endl;
}

void alamat_pointer(){
    int angka[5] = {10, 20, 30, 40, 50};
    int *ptr = angka;

    for (int i = 0; i < 5; i++) {
           cout << "Alamat elemen " << i << ": " << ptr << endl;
           ptr++;  // Pindahkan pointer ke elemen berikutnya
       }
    
    cout <<"alamat penampung semua pointer ptr: " << &ptr << endl;
}

void panjang_array(){
    int angka[5] = {0, 30, 400, 5000, 60000};
    int panjangArray = sizeof(angka) / sizeof(angka[0]);
    int tengahArray = panjangArray / 2;
    cout << sizeof(angka)<<endl;
    cout << sizeof(angka[0])<<endl;
    cout << "Panjang array: " << panjangArray << endl;
    cout << "Elemen tengah array: " << angka[tengahArray] << endl;
    cout<<"Dalam contoh, total ukuran memori dari pc yang dialokasikan untuk array angka adalah "<<sizeof(angka)<<" Hal ini terjadi karena setiap elemen dalam array tersebut memiliki ukuran" <<sizeof(angka[0])<<" byte (asumsi int memiliki ukuran 4 byte) dan array angka memiliki 5 elemen. Sehingga, sizeof(angka) menghasilkan 20 (4 byte/elemen * 5 elemen = 20 byte)."<<endl;

}

void hapus_array(){
    int *arr = new int[5];
//    char arr[100];
//    delete[] arr;
    delete arr;
}
void hapus_pointer(){
    char *p = new char[1034996];
    delete p;

}

int main() {
    pointer_biasa();
    cout << endl;
    p_array();
    cout << endl;
    operasi_array();
    cout << endl;
    alamat_pointer();
    cout << endl;
    panjang_array();
    cout << endl;
    hapus_array();
    cout << endl;
    hapus_pointer();
    return 0;
}
