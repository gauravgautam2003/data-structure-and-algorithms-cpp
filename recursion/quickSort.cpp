#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    // pivot element move right place

    for (int i = start + 1; i <= end; i++){
        if (pivot >= arr[i]){
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex){

        // check left elements are less than or equal to pivot
        while (i < pivotIndex && arr[i] <= pivot){
            i++;
        }

        // check right elements are greater than pivot
        while (j > pivotIndex && arr[j] > pivot){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    // base case
    if (start >= end)
        return;

    // partition to get pivot index
    int p = partition(arr, start, end);

    // recursive calls
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main(){
    int arr[] = {13, 55, 6, 17, 5, 7, 63, 34};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;

    quickSort(arr, start, end);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}