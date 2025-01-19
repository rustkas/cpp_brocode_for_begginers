#include <iostream>

using namespace std;



namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {
    int x = 0;

   cout << x << endl;

   using namespace first;
   cout << first::x << endl;

   using namespace second;
   cout << second::x << endl;

   using std::string;

   string name = "Bro";
   cout << name << endl;

    return 0;
}