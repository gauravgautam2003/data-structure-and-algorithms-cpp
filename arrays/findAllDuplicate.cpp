#include<iostream>
#include<vector>
using namespace std;

// brute force approach 0(n^2) time complexity
vector <int> findAllDuplicateNumbers(vector <int> & arr) {
    vector <int> ans;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                ans.push_back(arr[i]);
                break;
            }
        }
    }
    return ans;
}

// optimized approach 0(nlogn) time complexity
vector <int> findAllDuplicateNumbersWithOptize(vector <int> & arr) {
    vector <int> ans;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == arr[i+1]) {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

// optimized approach 0(n) time complexity
vector <int> findAllDuplicateNumbersWithOptize2(vector <int> & arr) {
    vector <int> ans;
    for(int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]) - 1;
        if(arr[index] < 0) {
            ans.push_back(index + 1);
        }
        arr[index] = -arr[index];
    }
    return ans;
}

int main() {
    vector <int> nums = {1,1,2,2,3,4,5,6,7,7};
    vector <int> duplicates = findAllDuplicateNumbers(nums);
    vector <int> duplicatesOptimized = findAllDuplicateNumbersWithOptize(nums);

    for(int x : duplicates) {
        cout << x << " ";
    }
    cout << endl;

    for(int x : duplicatesOptimized) {
        cout << x << " ";
    }
    cout << endl;

    vector <int> duplicatesOptimized2 = findAllDuplicateNumbersWithOptize2(nums);
    for(int x : duplicatesOptimized2) {
        cout << x << " ";
    }
    cout << endl;
}