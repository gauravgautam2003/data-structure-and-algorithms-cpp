#include<iostream>
using namespace std;

void sayDigit(int num, string *arr) {
    //base case

    if(num == 0) return ;

    // processing

    int digit = num % 10;
    num = num / 10;

    // resursive call

    sayDigit(num, arr);

    cout << arr[digit] << " ";
}

int main() {
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", " seven", "eight", "nine"};
    int num = 412;

    sayDigit(num, arr);

    return 0;
}