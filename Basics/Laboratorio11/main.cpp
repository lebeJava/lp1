#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

void write_sorry()
{
    cout << "Sorry" << endl;
}

int main()
{
    cout << square(2) << endl;
    cout << square(10) << endl;
    square(2);
    /*ERRORES
    int v1 = square();      -> Faltan argumentos.
    int v2 = square;        -> Faltan parentesis.
    int v3 = square(1, 2);  -> Cantidad diferente de argumentos.
    int v4 = square("one"); -> Tipo inesperado.
    */

    write_sorry();
    return 0;
}
