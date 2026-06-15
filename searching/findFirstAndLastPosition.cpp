#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key ) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }

        else {
             start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int main() {
    int arr[10] = {1,2,3,3,3,3,3,3,3,4};
    int size = sizeof(arr)/sizeof(int);
    int key = 3;

    cout << "first occurrence for 3 index is :" << firstOccurrence(arr, size, key) << endl;
    cout << "last occurrence for 3 index is :" << lastOccurrence(arr, size, key) << endl;

    return 0;
}