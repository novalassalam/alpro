#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
   while(l <= r) {  // 0 <= 9
      int mid = l + (r - l) / 2; // 0 + (9-0) / 2  = 4
      if(arr[mid] == x) {
         cout << "Element found at index " << mid << endl;
         return mid;
      }
      else if(arr[mid] < x) { // 4 < 7
         cout << "Checking right half of the array." << endl;
         l = mid + 1;
      }
      else {
         cout << "Checking left half of the array." << endl;
         r = mid - 1;
      }
   }
   return -1;
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 7;

   int result = binarySearch(arr, 0, n - 1, x);
   if(result == -1) {
      cout << "Element not found in the array" << endl;
   }
   return 0;
}
