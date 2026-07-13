#include<iostream>

using namespace std;

int checkArrayRotatedAndSorted(int arr[], int n) {
    int count = 0;
    
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] > arr[i]) {
            count++;
        }
    }

    if(arr[n - 1] > arr[0]) {
        count++;
    }

    return count <= 1;
}

int main() {
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(int);

    int result = checkArrayRotatedAndSorted(arr, n);

    if(result == 1) {
        cout << "Arra is rotated and sorted :" << result;
    } else {
        cout << "Arra is not rotated and sorted :" << result;
        
    }

    return 0;
}