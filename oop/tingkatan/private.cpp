#include <iostream>
using namespace std;
class MyClass {
private:
    int privateAttribute;
    string fungsiprivat(){
        return " ini private";
    }

public:
    void publicMethod() {
        // Dapat mengakses privateAttribute di sini karena berada dalam kelas yang sama
        privateAttribute = 10;
        cout <<privateAttribute<<endl;
    }

    void panggilfungsiprivate(){
        cout<<fungsiprivat();
    }
};

int main() {
    MyClass obj;
    // obj.privateAttribute; output error
    obj.publicMethod(); //output 10
    obj.panggilfungsiprivate(); // output ini private
    return 0;
}