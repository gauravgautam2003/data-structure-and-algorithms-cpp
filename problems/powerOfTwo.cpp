#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 16;
    int ans = 1;

    for(int i = 1; i <= 30; i++){
        if(ans == n){
            cout << "true";
            return true;
        }
        if(n < INT32_MAX/2){
            ans = ans * 2;
        }
    }
    cout << "false";
    return 0;
}