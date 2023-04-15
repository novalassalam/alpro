#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
   for(int i = 0; i < n; i++) {
      if(arr[i] == x) {
         cout << "Element found at index " << i << endl;
         return i;
      }
      cout << "Checking element at index " << i << endl;
   }
   return -1;
}

int main() {
   int arr[] = {3, 5, 2, 9, 7, 6, 1, 7};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 7;
   int result = linearSearch(arr, n, x);
   if(result == -1) {
      cout << "Element not found in the array" << endl;
   }
   return 0;
}
