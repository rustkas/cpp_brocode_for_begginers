#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Human {
    public:
        string name;
        int age;
        double weight;

        void eat() {
            cout << "This person is eating" << endl;
        }

        void drink() {
            cout << "This person is drinking" << endl;
        }
        
        void sleep() {
            cout << "This person is sleeping" << endl;
        }
};


int main()
{
    Human human1;
    human1.name = "Rick";
    human1.age = 65;
    
    cout << human1.name << endl;
    cout << human1.age << endl;

    Human human2;
    human2.name = "Morty";
    human2.age = 16;
    
    cout << human2.name << endl;
    cout << human2.age << endl;


    // int number;

    // cout << "How many cars do you have?" << endl;

    // cin >> number;

    // string* pCars = new string[number];

    // cout << endl;
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