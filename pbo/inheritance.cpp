#include <iostream>
using namespace std;

// Superclass
class Hewan {
public:
    void bersuara() {
        cout << "Hewan mengeluarkan suara" << endl;
    }
};

// Subclass yang mewarisi dari superclass Hewan
class Kucing : public Hewan {
public:
    void bunyi() {
        cout << "Meong!" << endl;
    }
};

int main() {
    Kucing cat; // Membuat objek dari kelas Kucing
    cat.bersuara(); // Memanggil metode dari kelas Hewan (kelas induk)
    cat.bunyi(); // Memanggil metode dari kelas Kucing (kelas anak)
    return 0;
}
