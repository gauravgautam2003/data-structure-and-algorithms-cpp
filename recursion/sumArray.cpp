#include<iostream>
using namespace std;


int sumOfArray(int *arr, int size) {
    // base case
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int sum = arr[0] + sumOfArray(arr + 1, size - 1);
    return sum;
}

int main() {
    int arr[5] = {1,3,4,5,6};

    int sum = sumOfArray(arr, 5);

    cout << "Sum is:" << " " << sum;

    return 0;
}