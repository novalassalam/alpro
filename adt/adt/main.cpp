#include <iostream>
using namespace std;

// Definisi struct dengan variabel anggota
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};



void biasa() {
    // Membuat objek mahasiswa1 dengan tipe struct Mahasiswa
    struct Mahasiswa mahasiswa1;
    // Mengisi nilai pada variabel anggota objek mahasiswa1
    mahasiswa1.nama = "John Doe";
    mahasiswa1.umur = 20;
    mahasiswa1.jurusan = "Informatika";
    // Menampilkan nilai variabel anggota objek mahasiswa1
    cout << "Nama: " << mahasiswa1.nama << endl;
    cout << "Umur: " << mahasiswa1.umur << endl;
    cout << "Jurusan: " << mahasiswa1.jurusan << endl;
}

//part 2
// Definisi struct dengan typedef
typedef struct T_MyStruct
{
    int val1;
    int val2;
    int val3[5];
} MyStruct; // ubah nama T_MyStruct as MyStruct


void ubah_typedef()
{
    // Deklarasi variabel myStruct dengan tipe MyStruct
    MyStruct myStruct;
   
    // Mengisi nilai pada variabel anggota struct myStruct
    myStruct.val1 = 10;
    myStruct.val2 = 100;
    myStruct.val3[0] = 1000;

    // Deklarasi variabel total dan inisialisasi dengan nilai awal 0
    int total = 0;

    // Menambahkan nilai val1, val2, dan val3[0] ke dalam total
    
//    total += myStruct.val1;
//    total += myStruct.val2;
//    total += myStruct.val3[0];
    
    total = myStruct.val1+myStruct.val2+myStruct.val3[0];

    
    // Menampilkan nilai total ke layar
    cout << "Total penjumlahan: " << total << endl;
}
//end part 2
//part 3
// Definisi struct dengan typedef
typedef struct T_MyStructs
{
    int val1;
    char val2;
    char val3[12];
    
    // Metode SayHello di dalam struct
    void SayHello();
} MyStructs;


// Implementasi metode SayHello
void MyStructs::SayHello()
{
    cout << "hallo world"<< endl;
}

//end part 3

//konstruktor dan dekonstruktor
typedef struct T_MyStructz
{
    int val1;
    T_MyStructz(); //saat di buat
    ~T_MyStructz(); // saat dihapus
} MyStructz;

T_MyStructz::T_MyStructz()
{
    printf("Created\n");
}

T_MyStructz::~T_MyStructz()
{
    printf("Destroy\n");
}



int main(){
    biasa();
    cout << endl;
    ubah_typedef();
    cout << endl;
    MyStructs myStruct;
     // Memanggil metode SayHello dari objek myStruct
    myStruct.SayHello();
    cout << endl;
    MyStructz myStructz;
    return 0;
}
