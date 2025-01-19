#include <iostream>

using namespace std;

int main() {
    
    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;

    cout << "x = "<< x << endl;
    cout << "y = "<< y << endl;
    cout << "sum = x + y | "<< sum << endl;

    // double 
    double price = 10.99;
    double gpa = 2.5;
    double temprature = 25.1;
    cout << "price = "<< price << endl;
    cout << "gpa = "<< gpa << endl;
    cout << "temprature = "<< temprature << endl;

    // single character
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';
    cout << "grade = "<< grade << endl;
    cout << "initial = "<< initial << endl;
    cout << "dollarSign = "<< dollarSign << endl;

    // boolean (true or false)
    bool student = true;
    bool not_student = false;
    cout << "student = " << student << endl;
    cout << "not student = "<< not_student << endl;
    

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";
    cout << "name = " << name << endl;
    cout << "day = "<< day << endl;
    cout << "food = " << food << endl;
    cout << "address = " << address << endl;
    cout << "Hello " << name << endl;


    return 0;
}