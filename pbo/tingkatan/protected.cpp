#include <iostream>
using namespace std;

class MyClass {
protected:
    int protectedAttribute;
public:
    void publicMethod() {
	protectedAttribute = 10; // Dapat mengakses protectedAttribute di sini karena berada dalam kelas yang sama
    cout << protectedAttribute<<endl;
    }
};

class MySubClass : public MyClass {
public:
    void subClassMethod() {
	    protectedAttribute = 20; // Dapat mengakses protectedAttribute di sini karena merupakan kelas turunan (subkelas)
        cout << protectedAttribute<<endl;    
    }
};

int main() {
    MyClass obj; // via public
    // obj.privateAttribute; output error
    obj.publicMethod(); //output 10 

    MySubClass sub; // via subclass
    sub.subClassMethod(); //output 20 
    return 0;
}