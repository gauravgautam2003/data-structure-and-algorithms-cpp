class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        char arr[10000];
        size_t len = s.length();
        int index = 0;

        for(int i = 0; i < numRows; i++) {
            for(int j = i; j < len; j = j + 2*(numRows - 1)) {
                arr[index++] = s[j];

                if(i > 0 && i < numRows - 1 && j + 2*(numRows - 1) - 2*i < len) {
                    arr[index++] = s[j + 2*(numRows - 1) - 2*i];
                }
            }
        }
        arr[index] = '\0';
        return arr;
    }
};