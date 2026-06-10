#include<iostream>
using namespace std;


int findDuplicateNumber(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
        cout << ans << endl;
    }
    cout << "after" << endl;
    for(int i = 1; i < size; i++) {
        ans = ans ^ i;
        cout << ans << " " << i << endl;
    }
    return ans;
}
int main() {
    int arr[5] = {1,2,3,4,2};
    int size = sizeof(arr)/sizeof(int);
    cout << findDuplicateNumber(arr, size);
    return 0;
}