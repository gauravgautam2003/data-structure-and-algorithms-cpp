#include<iostream>
#include<string>
using namespace std;

bool isValid(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9');
}

char getLower(char ch) {
    if(ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {

        while(left < right && !isValid(str[left])) {
            left++;
        }

        while(left < right && !isValid(str[right])) {
            right--;
        }

        if(getLower(str[left]) != getLower(str[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main() {
    string str = "A man, a plan, a canal: Panama";// same
    // amanaplanacanalpanama 

    bool result =  isPalindrome(str);
    if(result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}