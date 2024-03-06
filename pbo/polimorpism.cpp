#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Eating";
    }
};

class Goat: public Animal {
public:
    void eat() { // letak polomorpism dimanipulasi fungsi eatnya
        cout << "Eating grass";
    }
};

int main(void) {
    Goat g = Goat();
    g.eat(); // Output: "Eating grass"
    return 0;
}
