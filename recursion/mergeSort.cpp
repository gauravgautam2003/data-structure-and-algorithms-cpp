#include<iostream>
using namespace std;

void merge(int *arr, int start, int end) {
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
}

void mergeSort(int *arr, int start, int end) {
    //base case
    if(start >= end) {
        return  ;
    }

    int mid = start + (end - start)/2;

    // for left array

    mergeSort(arr, start, mid);

    //for right array

    mergeSort(arr, mid + 1, end);

    //merge array

    merge(arr, start, end);
}



int main() {
    int arr[] = {5, 61, 7, 34, 3, 43, 6, 4, 78, 38, 24, 23, 46, 57};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;
    mergeSort(arr, start, end);

    for(int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }


}