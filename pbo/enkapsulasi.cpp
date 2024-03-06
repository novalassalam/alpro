#include <iostream>
using namespace std;

class Mobil {
private:
    int kecepatan;

public:
    void setKecepatan(int kecepatanBaru) {
        kecepatan = kecepatanBaru; // cara set private dari private
    }

    int getKecepatan() {
        return kecepatan;
    }

};

int main() {

    Mobil mobil;

    // cout << mobil.kecepatan()<<endl; //error karena private

    mobil.setKecepatan(100);
    cout << "Kecepatan mobil: " << mobil.getKecepatan() << " km/h" << endl;
    return 0;
}
