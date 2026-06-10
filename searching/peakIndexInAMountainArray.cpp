#include<iostream>
using namespace std;

int peakIndexInAMountainArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end) {

        if(arr[mid] < arr[mid + 1]) {
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
    int arr[10] = {1,2,3,4,5,6,7,6,5,4};
    int size = sizeof(arr)/sizeof(int);

    cout <<"hello world" << endl;
    cout << "peak element is :" << peakIndexInAMountainArray(arr, size);
}