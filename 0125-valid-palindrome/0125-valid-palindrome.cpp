class Solution {
private:

    bool isValid(char ch) {
        return  (ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z') ||
                (ch >= '0' && ch <= '9');
    } 

    char getLower(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    } 

public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right) {
            while(left < right && !isValid(s[left])){
                left++;
            }
            while(left < right && !isValid(s[right])){
                right--;
            }

             if (getLower(s[left]) != getLower(s[right])) {
                return false;
            }
            
            left++;
            right--;
        }
        return true;
    }
};