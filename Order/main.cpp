#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Ingresa el valor de x: ";
    cin >> x;
    cout << "Ingresa el valor de y: ";
    cin >> y;
    cout << "Ingresa el valor de z: ";
    cin >> z;
    if(x > y) {
        x = x - y;
        y = x + y;
        x = y - x;
    }
    if(y > z) {
        y = y - z;
        z = y + z;
        y = z - y;
    }
    if(x > y) {
        x = x - y;
        y = x + y;
        x = y - x;
    }
    cout << x << " | " << y << " | " << z;
    return 0;
}
