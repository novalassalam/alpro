#include <iostream>
using namespace std;

// Superclass
class Hewan {
public:
    void suara() {
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
    Kucing kucing; // Membuat objek dari kelas Kucing
    kucing.suara(); // Memanggil metode dari kelas Hewan (kelas induk)
    kucing.bunyi(); // Memanggil metode dari kelas Kucing (kelas anak)
    return 0;
}
