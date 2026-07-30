class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        long long max_water = 0;

        while(left < right) {
            int current_width = right - left;
            long long current_height = min(height[left], height[right]);

            long long current_area = 1LL * current_width * current_height;

            max_water = max(max_water, current_area);

            if(height[left] < height[right]) {
                ++left;
            }else {
                --right;
            }
        }
        return max_water;
    }
};