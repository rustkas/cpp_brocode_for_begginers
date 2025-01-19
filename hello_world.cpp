// #include <iostream>

// int main() {
//     const double PI = 3.14;
    
//     std::cout << PI << std::endl;
//     // std::cout << b << std::endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}