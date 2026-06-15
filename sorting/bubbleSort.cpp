#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size) {
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
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