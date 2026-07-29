#include<iostream>
using namespace std;


bool binarySearch(int *arr, int start, int end, int target) {

    // base case

    if(start > end) return false;

    int mid = start + (end - start)/2;

    if(arr[mid] == target) {
        return true;
    }

    else if(arr[mid] < target) {
        return binarySearch(arr, mid + 1, end, target);
    }
    else {
        return binarySearch(arr, start, mid - 1, target);
    }

}

int main() {

    int arr[5] = {1, 3, 5, 6, 7};
    int target = 6;
    int end = sizeof(arr)/sizeof(int);
    int start = 0;

    bool ans = binarySearch(arr, start , end - 1, target);

    if(ans) {
        cout << "Present" << endl;
    } else {
        cout << "Not present" << endl;
    }

    return 0;
}