#include<iostream>
using namespace std;

void solve(int *arr, int start, int end) {
    int mid = start + (end - start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int mainArrayIndex = start;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge two sorted array

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }else {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }

    // remaining element from first array
    while(index1 < len1) {
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }

    // remaining element from second array
    while(index2 < len2) {
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int start, int end) {
    int mid = start + (end - start)/2;

    // without recursion
    
    while(start <= end) {
        solve(arr, start, mid);
        solve(arr, mid + 1, end);
        solve(arr, start, end);
        start++;
        end--;
    }

}

int main() {
    int arr[] = {4, 21, 3, 7, 12, 2, 16, 55, 1, 23};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}