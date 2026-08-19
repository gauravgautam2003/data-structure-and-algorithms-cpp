class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Step 1: Split string s into words
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }

        // Step 2: Length check
        if (pattern.length() != words.size()) {
            return false;
        }

        // Step 3: Two-way mapping check
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.length(); ++i) {
            char c = pattern[i];
            string w = words[i];

            // Check pattern character -> word mapping
            if (charToWord.count(c) && charToWord[c] != w) {
                return false;
            }

            // Check word -> pattern character mapping
            if (wordToChar.count(w) && wordToChar[w] != c) {
                return false;
            }

            // Establish mapping
            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};