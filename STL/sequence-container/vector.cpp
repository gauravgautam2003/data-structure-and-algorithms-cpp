#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector <int> vec;

    vec.push_back(1);
    vec.push_back(2);

    cout << "calculate capacity :" << vec.capacity() << endl;
    cout << "calculate size :" << vec.size() << endl;

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "front :" << vec.front() << endl;
    cout << "back :" << vec.back() << endl;

    vec.pop_back(); // pop last value

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "element at 1st index" << vec.at(1) << endl;
    
    vec.begin(); // point start value
    vec.end(); // point end value

    vec.clear(); // delete all element but capacity not change and size will 0
    
    return 0;
}