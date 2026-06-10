#include<iostream>
using namespace std;

int main(){
    int n = 2187;
    int ans = 1;

    for(int i = 1; i <= 26; i++){
        
        if(ans == n){
            cout << "true";
            return 1;
        }
        if(n < INT32_MAX/3){
            ans = ans * 3;
        }
    }
    cout << "false";
    return 0;
}