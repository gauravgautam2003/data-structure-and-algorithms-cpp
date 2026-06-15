#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size) {
    
    bool swapped = false;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    }

    // for optimization, if there is no swapping in the inner loop, it means the array is already sorted, so we can break out of the loop early

    if(swapped == false) {
        return 0;
    }
}

int main() {
    int arr[5] = {45,23,2,54,8};
    int size = sizeof(arr)/sizeof(int);

    bubbleSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}