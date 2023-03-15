#include <iostream>
using namespace std;

void pass_by_reference(int& x) {
  std::cout << "pass_by_reference()" << std::endl;
  std::cout << "  Alamat memori sekarang: " << &x << std::endl;
  x = 100;
  std::cout << "  Value sekarang: " << x << std::endl;
}

void passreff(int& a){
a = 20;
}

void pass_by_value(int x) {
  std::cout << "pass_by_value()" << std::endl;
  std::cout << "  Alamat memori sekarang: " << &x << std::endl;
  x = 100;
  std::cout << "  Value sekarang: " << x << std::endl;
}

void passvalue(int a){
a = 20;
}




int main() {
    int x = 10;
    passvalue(x);
    cout << x <<endl;
    
    int d = 10;
    passreff(d);
    cout << d <<endl;
    
    
  int a = 0;
  std::cout << "Alamat memori `a`: " << &a << std::endl;
  std::cout << "Value `a`: " << a << std::endl;
  pass_by_reference(a);
  std::cout << "Value `a` sekarang: " << a << std::endl;

  std::cout << std::endl << "----" << std::endl << std::endl;

  int b = 0;
  std::cout << "Alamat memori `b`: " << &b << std::endl;
  std::cout << "Value `b`: " << b << std::endl;
  pass_by_value(b);
  std::cout << "Value `b` sekarang: " << b << std::endl;

  return 0;
}
