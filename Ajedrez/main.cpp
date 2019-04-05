/*
CASO 1:
    Está ubicado en una esquina y tiene 3 posibles posiciones.
CASO 2:
    Está ubicado en un borde y tiene 5 posibles posiciones.
CASO 3:
    Está ubicado en el medio y tiene 8 posibles posiciones.
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    bool ejeY = false, ejeX = false;
    cout << "Ingresa la posicion x (1-8): ";
    cin >> x;
    cout << "Ingresa la posicion y (1-8): ";
    cin >> y;

    if(x == 1 || x == 8) {
        ejeY = true;
    }
    if(y == 1 || y == 8) {
        ejeX = true;
    }

    if(ejeX && ejeY) {
        cout << "CASO 1: 3 posiciones.";
    }else if(ejeX || ejeY) {
        cout << "CASO 2: 5 posiciones.";
    }else{
        cout << "CASO 3: 8 posiciones.";
    }
    return 0;
}
