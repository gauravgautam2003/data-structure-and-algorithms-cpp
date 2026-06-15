#include<iostream>
using namespace std;


void selectionSort(int arr[], int size) {// size 6

    for(int i = 0; i < size-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    int arr[6] = {45,53,22,43,7,8};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr, size);
    cout << "print sorted array" << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}