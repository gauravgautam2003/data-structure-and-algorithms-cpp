#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
}

void swapAlternateArray( int arr[], int size) {

    for(int i = 0; i < size; i=i+2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }

    }
    printArray(arr, size);
}

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[9] = {1,2,3,4,5,6,7,8,9};

    int size1 = sizeof(arr1)/ sizeof(int);
    int size2 = sizeof(arr2)/ sizeof(int);

    swapAlternateArray(arr1, size1);
    cout << endl;
    swapAlternateArray(arr2, size2);

    return 0;

}