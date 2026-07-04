#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec;
    vector<pair <int, int>> p = {{1,2},{2,3}};
    vec.push_back(23);
    vec.push_back(34);
    vec.push_back(44);
    vec.push_back(54);
    vec.push_back(64);

    vec.emplace_back(74); // same as a push back
    vec.pop_back();

    for(int val : vec ) {
        cout << val << " ";
    }
    
    cout << vec.at(2);
    cout << endl;
    cout << vec[2];
    cout << endl;
    cout << "size is: " << vec.size();
    cout << endl;
    cout << "capacity is: " << vec.capacity();
    cout << endl;
    
    vec.insert(vec.begin() + 2, 55);
    
    for(int val : vec ) {
        cout << val << " ";
    }
    vec.clear();
    
    for(int val : vec ) {
        cout << val << " ";
    }
    
    cout << endl;
    if(vec.empty()) {
        cout << "vector is empty: ";
    }


    return 0;

}