#include<iostream>
using namespace std;

bool isPossibleSolution(int stalls[], int k, int mid, int size) {
    int cowCount = 1;
    int lastPossition = stalls[0];

    for(int i = 0; i < size; i++) {

        if(stalls[i] - lastPossition >= mid) {
            cowCount++;

            if(cowCount == k) {
                return true;
            }
            lastPossition = stalls[i];
        }
    }
    return false;
}

int sortArray(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main() {

    int stalls[] = {4,2,1,3,6};
    int size = sizeof(stalls)/sizeof(int);

    sortArray(stalls, size);

    int start = 0;
    int maxi = -1;

    for(int i = 0; i< size; i++) {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int ans = -1;
    int k = 2;

    int mid = start + (end - start)/2;

    while(start <= end) {

        if(isPossibleSolution(stalls, k, mid, size)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    cout << start;
    return 0;
}