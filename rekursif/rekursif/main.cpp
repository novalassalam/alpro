//
//  main.cpp
//  rekursif
//
//  Copyright © 2023 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
//kamus
int i;


void hallo(int n){
    if (n > 0) {
            cout << n << endl;
            cout << "Hello, World!" << endl;
            hallo(n - 1);
        }
    }
    

void for_biasa(int n){
    for (i=1;i<n;i++){
        cout<<i<<" ";
    }
}

void for_rekursif(int n) {
   if (n > 0) {
      for_rekursif(n-1);
      cout << n << " ";
   }
}

void berhentiFor(int n){
    for(i = 1; i<=n;i++){
    printf("%d kali\n",i);
    }
}

void berhentiRekursif(int n)
{
    static int i=0;
    if (n<=0) {
        return;
    }else{
         printf("%d kali\n",++i);
         berhentiRekursif(n-1);
     }
    }

 int factorialLoop (int n)
{
    static int i = 1, fak = 1;
    for (i=1; i<=n; i++){
        fak = fak * i;
    }
     return fak;
}

int factorialRekursif(int n)
{

     if (n < 0)
           return 0;
     else if (n == 0)
           return 1;
     else if (n == 1)
           return 1;
     else
           return n * factorialRekursif(n-1);
    }


int fibonacciRecursive(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
  }
}

void fibonacciUsingFor(int n) {
  int a = 0, b = 1;
  if (n >= 1) {
    std::cout << a << " ";
  }

  for (int i = 2; i <= n; i++) {
    std::cout << b << " ";
    int temp = b;
    b = a + b;
    a = temp;
  }
}

int main() {
    hallo(3);
    berhentiFor(3);
    berhentiRekursif(3);
    for_biasa(10);
    cout << "for biasa" << endl;
    for_rekursif(10);
    cout << "for rekursif" << endl;
    cout << factorialLoop(4) << endl;
    cout << "faktorial biasa" << endl;
    cout << factorialRekursif(2)<<endl;
    cout << "faktorial rekursif" << endl;

    int num =5;
    std::cout << "Deret Fibonacci Recursive: ";
    for (int i = 0; i < num; i++) {
      std::cout << fibonacciRecursive(i) << " ";
    }
    
    std::cout << "Deret Fibonacci FOR: ";
    fibonacciUsingFor(num);
    return 0;
}
