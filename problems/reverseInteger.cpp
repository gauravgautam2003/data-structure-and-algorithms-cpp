#include<iostream>
using namespace std;

int main(){
    int n = 234;
    int reverse = 0;

    if((reverse > INT32_MAX/10) || (reverse < INT32_MIN/10)) return 0;
    
    while(n != 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n/10;
    }
    cout << reverse;

}