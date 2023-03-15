#include <iostream>

using namespace std;

string hallo(){
    return "hallo world dengan fungsi!"; //dalam fungsi harus terdapat perintah return
}

string hallo2(string nama){ //variabel tampungan berupa "nama"
    return nama; //pengembalian parameter nama
}

int angka(int tes){
    return tes;
}


int penjumlahan(int satu,int dua){
    return satu+dua*0.01;
}

int main() //perhatikan deklarasi "int"
{
    cout << penjumlahan(5,2) << endl;


    //perintah cetak biasa
    cout << "Hello world biasa! \n" << endl;

    //perintah cetak dengan memanggil fungsi
    cout << hallo() <<"\n"<< endl;

    // fungsi dengan parameter
    cout << hallo2("hello world dengan fungsi parameter") <<"\n"<< endl; //perhatikan hallo2 : fungsi ("noval") -> isi parameter
   
    cout << angka(435987867) <<"\n"<< endl; //perhatikan hallo2 : fungsi ("noval") -> isi parameter



    return 0; //harus return angka karena nama deklarasi fungsi int
}
