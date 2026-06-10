#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 1;
    for(int i = 1; i <= 16; i++){
        if(n == ans){
            cout << "true";
            return 0;
        }
        if(n < INT32_MAX/4){
            ans = ans * 4;
        }
    }
    cout << "false";
    return 0;
}