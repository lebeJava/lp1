#include <iostream>
using namespace std;

int main()
{
    int i = 97;
    for(i = 97; i < 123; i++)
    {
        cout << i << '\t' << char(i) << endl;
    }
    return 0;
}
