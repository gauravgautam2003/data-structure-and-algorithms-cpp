#include<iostream>
using namespace std;


void printArray(int arr[], int size) {
    for(int j = 0; j <= size-1; j++){
        cout << arr[j] << " ";
    }
}

void reverseArray(int arr[], int size) {
    int start = 0; 
    int end = size - 1;
        while(start <= end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            end--;
            start++;
        }
    printArray(arr, size);
}

int main() {
    int arr[11] = {1,2,3,4,5,6,7,8,9,10, 11};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr, size);

    return 0;
}