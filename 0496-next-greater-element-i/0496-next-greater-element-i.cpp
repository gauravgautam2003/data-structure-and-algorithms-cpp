class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                   bool found = false;

                    // Search for the first greater element on the right.
                    for (int k = j + 1; k < nums2.size(); k++) {

                        if (nums2[k] > nums2[j]) {
                            result.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }

                    // No greater element found.
                    if (!found) {
                        result.push_back(-1);
                    }

                    break;
                }
            }
        }
        return result;
    }
};