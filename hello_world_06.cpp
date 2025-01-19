#include <iostream>
#include <cmath>

using namespace std;


int main() {
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