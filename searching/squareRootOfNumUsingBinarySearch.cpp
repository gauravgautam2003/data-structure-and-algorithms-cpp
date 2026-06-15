#include<iostream>
using namespace std;

long long int binarySearch(int n) {

    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;
    long long int ans = -1;

    while(start <= end) {

        long long int square = mid * mid;

        if(square == n) {
            return mid;
        }

        if(square < n) {
            ans = mid;
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temprorySolution) {

    double factor = 1;
    double ans = temprorySolution;

    for(int i = 0; i < precision; i++) {
        factor = factor/10; // 0.1, 0.01, 0.001
        
        for(double j = ans; j*j < n; j = j + factor ) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n = 37;
    int temprorySolution =  binarySearch(n);
    
    cout << "Answer is: " << morePrecision(n, 3, temprorySolution);// 6.0826
    cout << temprorySolution << endl;
    return 0;
}