#include<iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    // base case
    if(size == 0 || size == 1) return true;


    if(arr[0] > arr[1]){
        return false;
    }
    else {
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}


int main() {
    int arr[5] = {1,3,4,5,6};

    bool result = isSorted(arr, 5);

    if(result) {
        cout << "array is sorted";
    } else {
        cout << "array is not sorted";
    }

    return 0;
}