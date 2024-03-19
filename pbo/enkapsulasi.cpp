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

    Mobil car;

    // cout << car.kecepatan<<endl; //error karena private
    // car.setKecepatan(100);
    cout << "Kecepatan mobil: " << car.getKecepatan() << " km/h" << endl;
    return 0;
}
