#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

void shuffle(int arr[], int n) {
    for (int i = n-1; i > 0; i--) {
        int j = rand() % (i+1);
        swap(arr[i], arr[j]);
    }
}

void bogoSort(int arr[], int n) {
    srand(time(NULL));
    int tries = 0;
    while (!isSorted(arr, n)) {
        shuffle(arr, n);
        tries++;
        cout << "Try " << tries << ": ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bogoSort(arr, n);
    return 0;
}
