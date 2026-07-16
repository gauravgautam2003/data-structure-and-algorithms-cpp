#include<iostream>

using namespace std;

int printArray(int arr[][3], int row, int col) {
    
    cout << "printing the 2d array :" << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int getRowSum(int arr[][3], int row, int col) {
    cout << "printing the sum :" << endl;

    for(int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 3; row++) {
            sum = sum + arr[row][col];
        }

        cout << sum << " ";
    }
}

int main() {
    int arr[3][3];

    cout << "Enter the elements" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    printArray(arr, 3, 3);

    getRowSum(arr, 3, 3);

}