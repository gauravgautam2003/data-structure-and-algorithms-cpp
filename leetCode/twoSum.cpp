#include<iostream>
using namespace std;

// This is a simple implementation of the Two Sum problem in C++14
// optimized for readability and understanding.
int twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                return 0; // Exit after finding the first pair
            }
        }
    }
    cout << "No two sum solution found." << endl;
    return -1; // Return -1 if no solution is found
}


int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr)/sizeof(int);

    twoSum(arr, n, target);
    return 0;
}

//output:
// Indices: 0 1
