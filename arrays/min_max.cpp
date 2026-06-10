#include<iostream>
using namespace std;


int getMax(int num[], int size){

    int max = INT8_MIN; // -infinite
    for (int i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    
    return max;
}

int getMin(int num[], int size){
    int min = INT8_MAX; // +infinite
    for (int i = 0; i < size; i++){
        if(num[i] < min){
            min = num[i];
        }
    }

    return min;
}

int main(){
    int size;
    cout << "Enter the size :";
    cin >> size;

    int number[100];

    for(int i = 0; i < size; i++){
        cin >> number[i];
    }

    cout << "maximum value is: " << getMax(number, size) << endl;
    cout << "minimum value is: " << getMin(number, size) << endl;
    return 0;
}