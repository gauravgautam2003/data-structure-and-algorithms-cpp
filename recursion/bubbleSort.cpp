#include<iostream>
using namespace std;

int bubbleSort(int *arr, int size) {
    // base case

    if(size == 0 || size == 1) return 0;

    //processing

    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive call
    bubbleSort(arr, size - 1);

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