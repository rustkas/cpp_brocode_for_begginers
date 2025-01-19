#include <iostream>

using namespace std;


int main() {
    int x = 0;


    string name;
    int age;

    cout << "What is your name?" << endl;
    // cin >> name;
    getline(cin >> ws, name);
    cout << "Your name is " << name << endl;

    cout << "What is your age?" << endl;
    cin >> age;
    cout << "Your age is " << age << endl;

    return 0;
}