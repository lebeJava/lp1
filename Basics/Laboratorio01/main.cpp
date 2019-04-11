#include <iostream>
using namespace std;

int main()
{
    double d = 0;
    while(cin>>d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
            << "\ni==" << i
            << "\ni2==" << i2
            << "\nchar(" << c << ")\n**********************\n";
    }
    double x = 27;
    int y = x;
    int a = 1000;
    char b = a;
    return 0;
}
