#include <iostream>  //header yang dibutuhkan untuk “kegiatan” input dan output
using namespace std; // semua yang ada dalam namespace std (standard),

int penjumlahan_fungsi(int a, int b) // fungsi
{
    int hasil = a + b;
    return hasil;
}

string inputan()
{ // fungsi
    string nama;
    string s;
    cout << "Tuliskan nama: ";
    cin >> nama;
    return nama;
}

void input_pw()
{ // prosedur
    string pw;
    string s;
    cout << "Tuliskan password: ";
    cin >> pw;

    if (pw == "welcome")
    { // if else multiple
        s = "diterima";
    }
    else
    {
        s = "ditolak";
    }

    s = (pw == "welcome") ? "diterima" : "ditolak"; // bool ifelse
    cout << " akses anda " << s << endl;
}
void penjumlahan_prosedur() // prosedur
{
    int a = 5;
    int b = 3;
    int hasil = a + b;
    cout << hasil << endl;
}

int kalkulator_fungsi(int a, int b, string x) // fungsi
{
    int hasil;
    if (x == "+")
    {
        hasil = a + b;
    }
    else if (x == "-")
    {
        hasil = a - b;
    }
    else
    {
        hasil = 0;
    }

    return hasil;
}

void perulangan(int n)
{ // for
    int i;
    for (i = 1; i < n; i++)
    {
        cout << "Hello World " << endl;
    }
}

void arrays(int x)
{
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

    // mengambil data pada array
    cout << "Huruf: " << huruf[x] << endl;
}

int main() // fungsi utama
{
    // cout<<"hallo world"<<endl;

    cout << "Prosedur" << endl;
    penjumlahan_prosedur();
    cout << "\n"
         << endl;

    cout << "Fungsi" << endl;
    cout << inputan() << endl;
    cout << "\n"
         << endl;

    cout << "Percabangan IF else" << endl;
    input_pw();
    cout << "\n"
         << endl;

    cout << "Operasi aritmatika" << endl;
    cout << penjumlahan_fungsi(2, 3) << endl;
    cout << "\n"
         << endl;

    cout << "Penggunaan For" << endl;
    perulangan(6);
    cout << "\n"
         << endl;

    cout << "Penggunaan Array" << endl;
    arrays(4);
    cout << "\n"
         << endl;

    cout << "Kombinasi" << endl;
    cout << kalkulator_fungsi(5, 3, "-") << endl;
    cout << "\n"
         << endl;
    return 0;
}
