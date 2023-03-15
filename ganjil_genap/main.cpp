#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Menentukan Ganjil-Genap  ##" << endl;
  cout << "===========================================" << endl;
  cout << endl;

  int x;

  cout << "Input sebuah bilangan bulat: ";
  cin >> x;

  if (x % 2 == 0) {
    cout << x << " adalah bilangan genap";
  }
  else {
    cout << x << " adalah bilangan ganjil";
  }

  cout << endl;
  return 0;
}
