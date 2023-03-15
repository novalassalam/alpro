#include <iostream>

using namespace std;



string hallo(){
  cout << "Hello world! dengan prosedur" << endl;  // pengembalian tanpa return
}

string hallo2(string nama){
    cout << nama << endl;  // pengembalian tanpa return
}

int main()
{
    cout << "Hello world biasa!" << endl;  // cetak biasa tanpa prosedur
    hallo();     //perintah cetak dengan memanggil prosedur

    // prosedur dengan parameter
    hallo2("hello word dengan prosedur parameter"); //perhatikan hallo2 : prosedur ("noval") -> isi parameter


    return 0;
}
