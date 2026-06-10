#include<iostream>
using namespace std;

int main(){
    int n = 10;

    if(n == 0) cout << "0";
    if(n < 0) n = -n;

    int binary[32];
    int i = 0;
 
    if(n > 0){
        while(n != 0){
            binary[i] = n & 1;
            n = n >> 1;
            i++;
        }
    }

    for(int j = i - 1; j >= 0; j--){
        cout << binary[j];
    }
    
    cout << endl;
}


