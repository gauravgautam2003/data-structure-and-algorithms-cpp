class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxLength = 0;

        // pass 1: left to right
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                left++;
            }else {
                right++;
            }

            if(left == right) {
                maxLength = max(maxLength, 2 * right);
            }
            else if(right > left) {
                left = 0;
                right = 0;
            }
        }

        //pass 2: right to left
        left = 0;
        right = 0;

         for(int i = s.length() - 1; i >= 0; i--) { // Fixed loop direction
            if(s[i] == '(') {              // Fixed counter associations
                left++;
            } else {
                right++;
            }
            if(left == right) {
                maxLength = max(maxLength, 2 * left);
            } else if(left > right) {       // Fixed reset condition
                left = 0;
                right = 0;
            }
        }
         
        return maxLength;
    }
};