
#include<iostream>
#include<vector>

using namespace std;

void rotatedArray(vector<int>& nums, int k) {
    vector<int> temp(nums.size());

    for(int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int k = 3;

    rotatedArray(nums, k);

    for(int i = 0; i < nums.size(); i++) {
        cout<< nums[i] << " ";
    }

    return 0;
}