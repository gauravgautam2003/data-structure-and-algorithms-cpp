#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {

    int candidate = 0;
    int count = 0;
    
    for(int num : nums) {
        if(count == 0) {
            candidate = num;
        }
        if(candidate == num) {
            count++;
        }
        else {
            count--;
        }
    }
    return candidate;
}

int main() {
    vector<int> nums = {2,2,2,2,1,1,1,2,2,2,2};
    cout << "Majority Element is :" << majorityElement(nums);
    return 0;
}