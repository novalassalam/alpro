#include <iostream>
using namespace std;

class Mobil {
private:
    int kecepatan; //disembunyikan

public:
    void setKecepatan(int kecepatanBaru) { // setting
        kecepatan = 1;
        cout << kecepatan <<endl;
        kecepatan = kecepatanBaru;
    }
    int getKecepatan() { //geting
        return kecepatan;
    }

};


int main() {

    Mobil car;
    // cout << car.kecepatan<<endl; //error karena private
    car.setKecepatan(100);
    cout << "Kecepatan mobil: " << car.getKecepatan() << " km/h" << endl;
    return 0;
}
