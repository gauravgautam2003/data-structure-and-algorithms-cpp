#include<iostream>
#include<vector>


using namespace std;

// brute force approach 0(n^2)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                break;
            }
        }
    }
    return result;
}

// optimized approach 0(n)

vector<int> optimizedIntersection(vector <int>& nums1, vector<int>& nums2, int n) {
    int i = 0, j = 0;
    vector<int> ans;
    while(i < n && j < n) {
        if(nums1[i] == nums2[j]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
        } else if(nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 3, 5, 7};
    
    vector<int> result = intersection(nums1, nums2);
    cout << "Intersection (Brute Force): ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    vector<int> optimizedResult = optimizedIntersection(nums1, nums2, min(nums1.size(), nums2.size()));
    cout << "Intersection (Optimized): ";
    for(int num : optimizedResult) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}