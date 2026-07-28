class Solution {
public:
    int countSegments(string s) {
        int count = 0;

        if(s.size() == 0) return 0;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == ' ' && s[i - 1] != ' ') {
                count++;
            }
        }

        if(s.back() != ' ') {
            count++;
        }
        return count;
    }
};