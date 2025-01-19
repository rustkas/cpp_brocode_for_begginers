#include <iostream>

using namespace std;

void welcome(string name, int age)
{
    cout << "Welcome " << name << age << " years old to my program" << endl;
}

int main()
{
    welcome("Anatolii", 43);

    return 0;
}