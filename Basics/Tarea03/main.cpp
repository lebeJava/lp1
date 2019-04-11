#include <iostream>
using namespace std;

int main()
{
    int i = 97;
    while(i < 123)
    {
        cout << i << '\t' << char(i) << endl;
        i++;
    }
    return 0;
}
