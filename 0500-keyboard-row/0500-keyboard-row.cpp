class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int charToRow[26];
        string row0 = "qwertyuiop";
        string row1 = "asdfghjkl";
        string row2 = "zxcvbnm";

        for(char ch : row0) charToRow[ch - 'a'] = 0;
        for(char ch : row1) charToRow[ch - 'a'] = 1;
        for(char ch : row2) charToRow[ch - 'a'] = 2;

        vector<string> result;

        for(const string& word : words) {
            if(word.empty()) continue;

            int targetRow = charToRow[tolower(word[0]) - 'a'];
            bool isValid = true;

            for(char ch : word) {
                if(charToRow[tolower(ch) - 'a'] != targetRow) {
                    isValid = false;
                }
            }

            if(isValid) {
                result.push_back(word);
            }
        }
        return result;
    }
};