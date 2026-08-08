#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    void print() {
        cout << level << endl;
    }

    // getter functions
    int getHealth() {
        return health;
    }

    int getLevel() {
        return level;
    }

    // setter functions

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    Hero Gaurav;
    Gaurav.setHealth(70);
    Gaurav.setLevel('A');

    cout << "Gaurav health is :" << Gaurav.getHealth() << endl;
    cout << "Gaurav level is :" << Gaurav.getLevel() << endl;

    return 0;
}