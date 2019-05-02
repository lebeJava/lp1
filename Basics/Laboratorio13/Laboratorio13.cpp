#include <iostream>
using namespace std;

int print_square(int v)
{
    cout << v << '\t' << v*v << endl;
}

int main()
{
    for (int i = 0; i < 100; ++i) print_square(i);
    return 0;
}
