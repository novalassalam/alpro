#include <iostream>
using namespace std;

struct Mahasiswa {
  string nama;
  int nim;
  float ipk;
};

int main() {
  Mahasiswa mhs;
  Mahasiswa* ptrMhs;

  ptrMhs = &mhs;

  ptrMhs->nama = "John Doe";
  ptrMhs->nim = 12345;
  ptrMhs->ipk = 3.75;

  cout << "Alamat pointer ipk: " << &ptrMhs->ipk << endl;
  cout << "Nilai pointer ipk: " << ptrMhs->ipk << endl;

  return 0;
}
