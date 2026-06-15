#include <iostream>
using namespace std;

bool isPossibleSolution(int arr[], int n, int k, int mid){
    int count = 1;
    int currentSum = 0;

    for (int i = 0; i < n; i++){

        if (currentSum + arr[i] <= mid){
            currentSum = currentSum + arr[i];
        }
        else {

            count++;

            if (count > k || arr[i] > mid){
                return false;
            }

            currentSum = arr[i];
        }
    }
    return true;
}

int sumOfArray(int arr[], int n){

    int sum = 0;

    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){
    int arr[4] = {5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;

    int sum = sumOfArray(arr, n);

    int start = 0;
    int end = sum;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end){

        if (isPossibleSolution(arr, n, k, mid)){

            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    cout << ans;
    return 0;
}