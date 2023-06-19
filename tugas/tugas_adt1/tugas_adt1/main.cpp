#include <iostream>
using namespace std;

// Definisi struct dengan variabel anggota
struct soal2 {
    string merk, type;
    int tahun, harga;
};

void jawaban2(){
    struct soal2 sepeda;
    sepeda.merk="Polygon";
    sepeda.type="Sepeda Gunung";
    sepeda.tahun=2003;
    sepeda.harga=2000000;
    cout << "Merk: " << sepeda.merk << endl;
    cout << "type: " << sepeda.type << endl;
    cout << "tahun: " << sepeda.tahun << endl;
    cout << "harga: " << sepeda.harga << endl;
}


//Luas Persegi Panjang = panjang x lebar
//Luas Lingkaran = 22/7 * r * r
//Volume Kerucut = 1/3 * phi * r2 * t
//Volume Bola = 4/3 * phi * r3

typedef struct {
    int panjang;
    int lebar;
} PersegiPanjang;




void jawaban1(){
    PersegiPanjang pp;
    // Mengisi nilai panjang dan lebar
    cout << "Masukkan panjang: ";
    cin >> pp.panjang;

    cout << "Masukkan lebar: ";
    cin >> pp.lebar;

    // Menghitung luas persegi panjang
    int luas = pp.panjang * pp.lebar;

    // Menampilkan hasil luas
    cout << "Luas persegi panjang: " << luas << endl;
}


typedef struct LuasLingkaran
{
    int r;
    float l;
    
    void hasil()
    {
        r = 2;
        l = (22.0/7.0)*(r*r);
        cout<< l<< endl;
    }
}Luas;


typedef struct LuasLingkaran2
{

public:
    int r;
    float l;
private:
    float phi = 22.0/7.0;
public:
    // Metode untuk mengakses anggota private
    float hasil()
    {
        r = 2;
        l= phi*(r*r);
        return l;
    }
} FungsiLuas;



int main(){
    jawaban1();
    cout<<endl;
    jawaban2();
    cout<<endl;
    Luas luas;
    luas.hasil();
    cout<<endl;
    FungsiLuas luase;
    cout<<luase.hasil()<<endl;
    return 0;
}
