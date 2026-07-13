#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> findDissappearedNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> ans;

    for(int i = 1; i <= nums.size(); i++) {
         if(!binary_search(nums.begin(), nums.end(), i)) {
                ans.push_back(i);
            }
    }
    return nums = ans;
}

int main() {
    vector<int> nums = {4,1,2,7,8,2,3,7};
    findDissappearedNumbers(nums);

    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
}