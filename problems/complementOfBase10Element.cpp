#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int m = n;
    int mask = 0;

    if(n == 0) return 1; // edge cases

    while(m != 0) {
        mask = (mask << 1) | 1; // left shift
        m = m>>1; // right shift
    }

    int ans = (~n) & mask; // NOT with AND
    cout << ans;
    return 0;
}