class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> ans;

        for(int i = 0; i < candyType.size(); i++) {
            ans.insert(candyType[i]);
        }

        return min(ans.size(), candyType.size()/2);
    }
};