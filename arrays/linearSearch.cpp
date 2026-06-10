#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element) {

    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {2,4,5,1,7,-5,35,21,8,9};
    int size = sizeof(arr)/sizeof(int);
    int key;

    cout << "Enter the key that you want to search :";
    cin>> key;
    bool found = linearSearch(arr, size, key);

    if(found) {
        cout << "key is present in the given array";
    }else{
        cout << "key is not present in the fiven array :";
    }
    return 0;
}