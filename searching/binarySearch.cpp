#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main() {
    int arr[6] = {2,4,6,8,9,12};
    int size = sizeof(arr)/sizeof(int);
    int key = 80;

    cout << "Value is find :";
    int ans = binarySearch(arr, size, key);
    cout << ans;
}