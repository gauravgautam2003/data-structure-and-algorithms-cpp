#include<cmath>
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distance_value = 0;

        for(int val1 : arr1) {
            bool isValid = true;

            for(int val2 : arr2) {

                if(abs(val1 - val2) <= d) {
                    isValid = false;
                    break;
                }
            }

            if(isValid) {
                distance_value++;
            }
        }
        return distance_value;
    }
};