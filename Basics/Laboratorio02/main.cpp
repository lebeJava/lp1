#include <iostream>
using namespace std;

int main()
{
    double d = 2.5;
    int i = 2;
    double d2 = d/i;
    int i2 = d/i;
    d2 = d/i;
    i2 = d/i;
    {
        double dc;
        cin >> dc;
        double df = 9/5*dc+32;
        cout << "Primer resultado: " << df << endl;
    }
    {
        double dc;
        cin >> dc;
        double df = 9.0/5*dc+32;
        cout << "Segundo resultado: " << df << endl;
    }
    return 0;
}
