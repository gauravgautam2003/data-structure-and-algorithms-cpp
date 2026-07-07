#include<iostream>
#include<vector>

using namespace std;

vector <int> reverseArray(vector<int>& ans, int size) {
    int start = 0;
    int end = size  - 1;

    while(start <= end) {
        swap(ans[start], ans[end]);
        start++;
        end--;
    }

    return ans;
}

vector<int> sumOfTwoArrays(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;
    int carry = 0;

    while(i >= 0 && j >= 0) {
        int valOne = arr1[i];
        int valTwo = arr2[j];

        int sum = valOne + valTwo + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
        j--;
    }

    //fisrt case

    while(i >= 0) {
        int valOne =  arr1[i];
        int sum = valOne + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
    }

    //second case

    while(j >= 0) {
        int valOne =  arr2[j];
        int sum = valOne + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        j--;
    }

    //second case

    while(carry != 0) {
        
        int sum = carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

    }
    return ans;

}
int main() {

    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> result = sumOfTwoArrays(arr1, n, arr2, m);

    reverseArray(result, result.size());

    for(int val : result) {
        cout << val <<" ";
    }

    return 0;
}

//output: 1 2 9 0