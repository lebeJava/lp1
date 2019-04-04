#include <iostream>
using namespace std;

int main()
{
    const double cm_per_inch = 2.54;
    int length = 1;
    char unit = ' ';
    cout << "Por favor ingrese una longitud seguida de su unidad (cm(c), inch(i))" << endl;
    cin >> length >> unit;
    switch(unit) {
        case 'i':
            cout << length << "in ==> " << cm_per_inch*length << "cm" << endl;
            break;
        case 'c':
            cout << length << "cm ==> " << length/cm_per_inch << "in" << endl;
            break;
        default:
            cout << "Lo siento, no conozco una unidad llamada '" << unit << "'" << endl;
            break;
    }
    return 0;
}
