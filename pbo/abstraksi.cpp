#include <iostream>
using namespace std;

// Abstract class
class BangunDatar {
public:
    virtual void hitungLuas() = 0; // Metode abstrak tanpa implementasi
};

// Subclass yang mewarisi dari abstract class BangunDatar
class Persegi : public BangunDatar {
public:
    void hitungLuas() override {
        cout << "Luas persegi: s x s" << endl;
    }
};

int main() {
    Persegi persegi;
    persegi.hitungLuas(); // Output: Luas persegi: s x s
    return 0;
}
