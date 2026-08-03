class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int count1 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count1++;
            }else {
                count1 = 0;
            }

            if(count1 > count) {
                count = count1;
            }
        }
        return count;
    }
};