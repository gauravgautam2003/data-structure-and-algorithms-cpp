#include<iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end) {
        
        if(arr[mid] > arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main() {
    int arr[5] = {6,7,8,9,5};
    int size = sizeof(arr)/sizeof(int);

    cout << "pivot element is: " << getPivot(arr, size);// pivot element is: index 4 which is 5
    return 0;
}