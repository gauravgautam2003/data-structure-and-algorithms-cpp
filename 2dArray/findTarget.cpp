#include<iostream>

using namespace std;

bool findTargetNumber(int arr[][3], int target, int row, int col) {

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
            cout << endl;
        }
    }
    
    return 0;
}

int main() {
    int arr[3][3];

    cout << "Enter the elements" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target value that you want to find :" << endl;
    cin >> target;

    if(findTargetNumber(arr, target, 3, 3)) {
        cout << "target found";
    }else{
        cout << "target not found";
    }
}