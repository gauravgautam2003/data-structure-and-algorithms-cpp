#include<iostream>
using namespace std;

int insertionSort(int arr[], int size) {

    int i = 1;

    while(i < size) {

        int temp = arr[i];
        int j = i - 1;

        while(j >= 0) {

            if(arr[j] > temp) { // shift

                arr[j+1] = arr[j];

            } else { // stop
                break;
            }
            j--;
        }
        i++;
        arr[j+1] = temp;
    }
}

int main() {

    int arr[] = {45,3,42,54,66,7,8};
    int size = sizeof(arr)/sizeof(int);

    insertionSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}