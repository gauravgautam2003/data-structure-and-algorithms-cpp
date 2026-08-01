#include<iostream>
using namespace std;

int selectionSort(int *arr, int size) {
    // base case

    if(size == 0 || size == 1) return 0;

    //processing
    int maxIndex = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // swap
    swap(arr[maxIndex], arr[size - 1]);


    // recursive call
    selectionSort(arr, size - 1);

}

int main() {
    int arr[5] = {45,23,2,54,8};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}