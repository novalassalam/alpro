#include <iostream>
using namespace std;

class Obj {
public:
    int id;
    string name[2];

    int tes(){
        return 'tes';
    }
};

int main() {
    // Membuat objek dari kelas Object
    Obj ob[1];

    ob[0].name[0]='mhs1';

    // Menginisialisasi data member
    ob[0].id = 1;
    ob[0].name[0] = "Example Object";
    ob[0].tes();

    // Menampilkan detail objek
    cout << "Object Details:" << endl;
    cout << "ID: " << ob[0].id << endl;
    cout << "Name: " << ob[0].name[0] << endl;

    return 0;
}
