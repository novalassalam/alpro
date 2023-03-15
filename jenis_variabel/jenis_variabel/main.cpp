#include <iostream>

using namespace std;
int c; //variabel global
int a=10;
int contoh_global(){
    c = a; // tidak perlu di deklarasi
    return c;
}
// Membuat fungsi dengan nama contoh
int contoh(){
     // Mendefinisikan variabel lokal
     // Dengan nama "MD"
     int MD = 0;
     MD = MD + 10;
     return MD;
}

// Membuat fungsi dengan nama contoh2
int contoh2(){
     // Mendefinisikan variabel statis lokal
     // Dengan nama "MD"
     static int MD2 = 0;
     MD2 = MD2 + 10;
     return MD2;
}


int main ()
{
     // Mendefinisikan variabel x, y dan z
     int x, y, z;
     int x2,y2,z2;
     // Memanggil fungsi contoh() untuk yang pertama
     x = contoh();
    x2 = contoh2();

     // Memanggil fungsi contoh() untuk yang kedua
     y = contoh();
    y2=contoh2();
     // Memanggil fungsi contoh() untuk yang ketiga
     z = contoh();
    z2 = contoh2();
     // Menampilkan nilai
     // Yang telah diproses di dalam fungsi
     
    cout<<contoh_global()<<endl;
    cout<<"####################"<<endl;

    cout<<"Nilai pada pemanggilan pertama : "<<x<<endl;
     cout<<"Nilai pada pemanggilan kedua   : "<<y<<endl;
     cout<<"Nilai pada pemanggilan ketiga  : "<<z<<endl;
    
    cout<<"####################"<<endl;
    
    cout<<"Nilai pada pemanggilan pertama : "<<x2<<endl;
        cout<<"Nilai pada pemanggilan kedua   : "<<y2<<endl;
        cout<<"Nilai pada pemanggilan ketiga  : "<<z2<<endl;
    
     return 0;
}

