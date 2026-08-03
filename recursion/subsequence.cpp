#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // base case

    if(index >= str.length()) {
        if(output.length() >= 0) {
            ans.push_back(output);
        }
        return;
    }

    //exclude call

    solve(str, output, index+1, ans);

    //include call
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

int main() {
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;

    solve(str, output, index, ans);

    for(auto val: ans) {
        cout << val << " ";
    }
    return 0;
}

//output "", "a", "b", "c", "ab", "ac", "bc", "abc"