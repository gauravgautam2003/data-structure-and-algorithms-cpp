#include<iostream>
using namespace std;

int findUniqueNumber(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[5] = {1,1,2,4,4};
    int size = sizeof(arr)/sizeof(int);
    cout << findUniqueNumber(arr, size);
    return 0;

}