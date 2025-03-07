#include <iostream>
using namespace std;
class MyClass {
    public:
        int publicAttribute; // variabel
        void publicMethod() { // fungsi atau prosedur
            // Dapat mengakses publicAttribute di sini karena berada dalam kelas yang sama
            publicAttribute = 10;
            cout<<publicAttribute;
        }
    };
    int main() {
        MyClass obj;
        // Mengakses dan mengubah nilai publicAttribute dari luar kelas
        int b = obj.publicAttribute = 20;
        cout <<b ; // output 20
        obj.publicMethod(); //output 10
        return 0;
    }
