#include <iostream>
using namespace std;
class Animal {
public:
    virtual void eat() { // virtual keyword is crucial for polymorphism
        cout << "Eating";
    }
};

class Goat: public Animal {
public:
    void eat() override { // letak polomorpism dimanipulasi fungsi eatnya
        cout << "Eating grass";
    }
};

int main(void) {
    Goat g = Goat();
    g.eat(); // Output: "Eating grass"
    return 0;
}
