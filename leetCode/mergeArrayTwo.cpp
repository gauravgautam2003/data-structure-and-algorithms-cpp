#include<iostream>
#include<vector>

using namespace std;

vector<int> mergeSortedArray(vector<int>& vec1, int n, vector<int>& vec2, int m) {
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while(i >= 0 && j >= 0) {
        if(vec1[i] > vec2[j]) {
            vec1[k--] = vec1[i--];
        }else {
            vec1[k--] = vec2[j--];
        }
    }

    while(i >= 0) {
        vec1[k--] = vec1[i--];
    }

    
}

void printArray(vector<int>& vec, int n) {
    for(int val : vec) {
        cout << val << " ";
    }
}

int main() {
    vector<int> vec1 = {1,3,5,0,0,0};
    vector<int> vec2 = {2,4,6};

    mergeSortedArray(vec1, 3, vec2, 3);
    
    printArray(vec1, vec1.size());

    return 0;
}