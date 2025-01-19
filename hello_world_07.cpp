#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {
        cout << "Welcome to the site!" << endl;
    } else if (age < 0) {
        cout << "You have not been born yet!" << endl;
    } else if (age > 100) {
        cout << "You are too old to enter this site!" << endl;
    }


    double x = 3;
    double y = 4;
    
    double max_value;
    double min_value;
    double pow_value;
    
    max_value = max(x,y);
    min_value = min(x,y);
    pow_value = pow(x,y);

    cout << "Max is " << max_value << endl;
    cout << "Min is " << min_value << endl;
    cout << "Power " << x << " to " << y << " is " << pow_value << endl;

    return 0;
}