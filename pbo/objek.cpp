#include <iostream>
using namespace std;

class Obj {
public:
    int id;
    string name;

    int tes(){
        return 'tes';
    }
};

int main() {
    // Membuat objek dari kelas Object
    Obj ob;

    // Menginisialisasi data member
    ob.id = 1;
    ob.name = "Example Object";
    ob.tes();

    // Menampilkan detail objek
    cout << "Object Details:" << endl;
    cout << "ID: " << ob.id << endl;
    cout << "Name: " << ob.name << endl;

    return 0;
}
