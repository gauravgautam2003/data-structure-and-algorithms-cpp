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

int largestColSum(int arr[][3], int row, int col) {
    
    int maxi = INT8_MIN;
    int rowIndex = -1;
    

    for(int j = 0; j < row; j++) {
        int sum = 0;
        for(int i = 0; i < col; i++) {
            sum = sum + arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            rowIndex = j;
        }
    }

    cout << "print the maxi number :" << maxi << endl;
    return rowIndex;
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

    int ansIndex = largestColSum(arr, 3, 3);

    cout << "Largest index is :" << ansIndex;

}