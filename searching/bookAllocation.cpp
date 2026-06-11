#include<iostream>
using namespace std;

bool isPossibleSolution(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int sumPage = 0;

    for(int i = 0; i < n; i++) {

        if(sumPage + arr[i] <= mid) {
            sumPage = sumPage + arr[i];
        } 
        else {

            studentCount++;

            if(studentCount > m || arr[i] > mid) {
                return false;
            }

            sumPage = arr[i];
        }
    }
    return true;
}

int sumOfArray(int arr[], int n) {

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}


int main() {
    int arr[4] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(int);
    int m = 2;
    
    int sum = sumOfArray(arr, n);

    int start = 0;
    int end = sum;
    int ans = -1;


    int mid = start + (end - start)/2;

    while(start <= end) {

        if(isPossibleSolution(arr, n, m, mid)) {

            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }
    
    cout << ans;
    return 0;    
}