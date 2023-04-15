#include <iostream>
//judul : aplikasi konversi waktu
using namespace std;

//kerjakan
//void tugas5()
//{
//    int nilai[] = {1,4,5,6,7};
//    int total;
//    int ukuran = // mengetahui jumlah array
//
//    //penjumlahan
//    total=0;
//    for (){
//        total=total+....;
//        cout<<"loop ke- "<<i+1<<"jumlah= "<<total-nilai[i]<<"+"<<nilai[i]<<"="<<total<<endl;
//    }
//    cout<<"total semua: "<<total<<endl;
//}


int main()
{


//kamus
int sec, jam, menit, detik; //variabel global

    //algoritma

    cout << "Masukkan jumlah detik yang ingin dihitung : ";
    cin >> sec ;
    cout << " second 1 " << sec<<endl;
    jam = sec / (60*60);  // jam =  n detik / 3600

    sec = sec - ((60*60) *jam); // detik = detik - (3600 *jam)
    cout << " second 2 " << sec<< endl;

    menit = sec / 60;
    sec = sec-(60*menit);
    cout << " second 3 " << sec<<endl;


    cout << "==================" << endl;
    cout << "waktunya adalah " << endl;
    cout << " jam : " << jam << " menit : " << menit << " Detik : " <<sec<<endl;

    //  panggil tugas 5;
    return 0;
}

