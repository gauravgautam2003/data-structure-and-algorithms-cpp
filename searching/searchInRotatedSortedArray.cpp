#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int m, int target) {
    int start = n;
    int end = m;
    int mid = start + (end - start)/2;

    while(start <= end) {

        if(arr[mid] == target) {
            return mid;
        }

        if(arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}

int getPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
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
    int arr[5] = {4,5,1,2,3};
    int size = sizeof(arr)/sizeof(int);
    int target = 3;

    int pivot = getPivot(arr, size);

    if(target >= arr[pivot] && target <= arr[size-1]) {
        
        cout << binarySearch(arr, pivot, size-1, target);
    }
    else {
        cout << binarySearch(arr, 0, pivot, target);
    }

    return 0;
}