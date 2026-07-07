#include<iostream>
#include<string>

using namespace std;

int findIndexFirstOccurenceString(string str1, string str2) {
    int n = str1.size();
    int m = str2.size();

    for(int i = 0; i <= n - m; i++) {
        int j = 0;

        while(j < m && str1[i + j] == str2[j]) {
            j++;
        }

        if(j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    string str1 = "sadbutsad";
    string str2 = "sad";

    cout << findIndexFirstOccurenceString(str1, str2);
    return 0;
}