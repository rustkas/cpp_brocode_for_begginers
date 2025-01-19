#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int number;

    cout << "How many cars do you have?" << endl;

    cin >> number;

    string* pCars = new string[number];

    cout << endl;
    // string cars[] = {"Corvette", "Tesla", "Ferrari"};
    // string cars[] = {"Corvette", "Tesla", "Ferrari"};

    // for(int i=0; i < size(cars); i++) {
    //     cout << cars[i] << endl;
    // }
    // string name = "Bro";
    // int age = 100;
    // string food = "pizza";

    // string* pName = &name;
    // int* pAge = &age;
    // string* pFood = &food;

    // cout << pName << endl;
    // cout << pAge << endl;
    // cout << pFood << endl;

    return 0;
}