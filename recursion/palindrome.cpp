#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j) {
    // base case
    if(i > j) return true;

    if(str[i] != str[j]) return false;

    else return isPalindrome(str, i + 1, j - 1);

}

int main() {
    string str = "abbaabba";
    bool result = isPalindrome(str, 0, str.length() - 1);

    if(result) {
        cout << "string is palindrome";
    }else {
        cout << "string is not palindrome";
    }

    return 0;
}