#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fibonacciFor(int n) {
  if (n <= 1)
    return n;

  int prev = 0;
  int curr = 1;
  int result;

  for (int i = 2; i <= n; i++) {
    result = prev + curr;
    prev = curr;
    curr = result;
  }
  return result;
}


int fibonacciRecursive(int n) {
  if (n <= 1)
    return n;
  return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}


int main() {
  int ns = 30;
  auto starts = high_resolution_clock::now();
  int fibResults = fibonacciRecursive(ns);
  auto ends = high_resolution_clock::now();
  auto durations = duration_cast<microseconds>(ends - starts);
  cout << "Fibonacci rekursif of " << ns << ": " << fibResults << endl;
  cout << "Execution rekursif time (microseconds): " << durations.count() << endl;
    
    int n = 30;

    auto start = high_resolution_clock::now();
    int fibResult = fibonacciFor(n);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Fibonacci (for) of " << n << ": " << fibResult << endl;
    cout << "Execution (for) time (microseconds): " << duration.count() << endl;
  return 0;
}
