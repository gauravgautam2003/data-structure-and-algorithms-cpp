#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int target) {
    // base case

    if(size == 0) return false;

    if(arr[0] == target) {
        return true;
    } else {
        return linearSearch(arr + 1, size - 1, target);
    }
}

int main() {
    int arr[5] = {1,3,5,6,7};
    int target = 6;
    int size = 5;

    bool ans = linearSearch(arr, size, target);

    if(ans) {
        cout << "Present" << endl;
    } else {
        cout << "Not present" << endl;
    }

    return 0;
}