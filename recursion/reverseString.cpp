#include<iostream>
using namespace std;

int reverseString(string &str, int i, int j) {
    // base case

    if(i > j) return 0;

    //recursive call
    swap(str[i], str[j]);
    i++;
    j--;

    reverseString(str, i, j);


}

int main() {
    string str = "gaurav";

    reverseString(str, 0, str.length() - 1);

    cout << str;
    return 0;
}