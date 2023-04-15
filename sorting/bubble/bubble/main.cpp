#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        cout << "Step " << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
