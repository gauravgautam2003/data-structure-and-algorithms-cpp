class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> query;

        for(char ch : s) {
            query[ch]++;
        }

        for(int i = 0; i < s.size(); i++) {
            if(query[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};