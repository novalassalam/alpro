#include <iostream>
using namespace std;

// Abstract class
class BangunDatar {
public:
    virtual void hitungLuas() = 0; // Pure virtual function (abstraksi)
};

// Subclass yang mewarisi dari abstract class BangunDatar
class Persegi : public BangunDatar {
public:
    void hitungLuas() override { // Harus mengimplementasikan hitungLuas
        cout << "Luas persegi: s x s" << endl;
    }
};

// Subclass yang mewarisi dari abstract class BangunDatar
class PPanjang : public BangunDatar {
    public:
        void hitungLuas() override { // Harus mengimplementasikan hitungLuas
            cout << "Luas Pp: p x l" << endl;
        }
    };

int main() {
    Persegi persegi;
    persegi.hitungLuas(); // Output: Luas persegi: s x s
    PPanjang ppanjang;
    ppanjang.hitungLuas(); // Output: Luas ppanjang: p x l
    return 0;
}
