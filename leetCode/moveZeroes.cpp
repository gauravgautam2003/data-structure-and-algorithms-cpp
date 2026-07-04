#include<iostream>
#include<vector>
using namespace std;


vector <int> moveZeroes(vector<int>& arr, int size) {
    int nonZeroes = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[nonZeroes]);
            nonZeroes++;
        }
    }
}


int main() {
    vector<int> arr = {1, 3, 0, 0, 12, 0};
    int size = arr.size();

    moveZeroes(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}