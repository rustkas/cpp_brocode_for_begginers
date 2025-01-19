#include <iostream>

using namespace std;

int main()
{
    double number1;
    double number2;
    double result;
    char op;

    cout << "***************** CALCULATOR *****************" << endl;
    cout << "Enter either (+-*/)" << endl;
    
    cout << "Enter fist value: ";
    cin >> number1;
    cout << endl;
    
    cout << "Enter second value: ";
    cin >> number2;
    cout << endl;

    cout << "Enter math operation: ";
    cin >> op;
    cout << endl;

    switch (op)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    default:
        cout << "That was not a valid response" << endl;
        break;
    }
    cout << "Result is " << result << endl;

    return 0;
}