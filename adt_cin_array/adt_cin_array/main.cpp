#include <string>
#include <iostream>
using namespace std;

struct sepeda{
    string merk;
    int tahun;
    int jumlahData;
};


int main(){

    sepeda bruh;
    bruh.jumlahData = 0;
    
    cout << "Masukkan jumlah data sepeda: ";
    cin >> bruh.jumlahData;
    cout << "Data Sepeda:" << endl;
    cout << "Merk\t\tTahun" << endl;
    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < bruh.jumlahData; i++) {
        cout << "Sepeda #" << i + 1 << endl;
        cout << "Masukkan merek sepeda: ";
        cin >> bruh.merk;
        cout << "Merk = " << bruh.merk << endl;
        cout << "Masukkan tahun sepeda: ";
        cin >> bruh.tahun;
        cout << "Tahun = " << bruh.tahun << endl;
        cout << endl;
        }


    for (int i = 0; i < bruh.jumlahData; i++) {
        cout << bruh.merk[i] << "\t\t" << bruh.tahun << endl;

    }


return 0;
}
