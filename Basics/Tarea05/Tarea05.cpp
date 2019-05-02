#include <iostream>
using namespace std;

int square(int x)
{
    int resultado = 0;
    for (int i = 1; i <= x; i++)
    {
        resultado += x;
    }
    return resultado;
}

int main()
{
    cout << 5 << '\t' << square(5) << endl;
    return 0;
}
