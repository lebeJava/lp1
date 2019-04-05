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
    int resultado = 0;
    int Calcular(int x, int y);
    int Alrededores(int a, int b, int desde, int hasta, int* suma);

    int x, y, j;
    cout << "Ingresa la posicion x (1-8): ";
    cin >> x;
    if(!x || x < 1 || x > 8) {
        cout << "ERROR";
        return 0;
    }
    cout << "Ingresa la posicion y (1-8): ";
    cin >> y;
    if(!y || y < 1 || y > 8) {
        cout << "ERROR";
        return 0;
    }
    cout << "Ingresa el numero de jugadas: ";
    cin >> j;
    if(!j || j < 0) {
        cout << "ERROR";
        return 0;
    }
    Alrededores(x, y, 1, j, &resultado);
    cout << "Resultado: " << resultado;
    return 0;
}

int Calcular(int x, int y) {
    bool ejeY = false, ejeX = false;

    if(x == 1 || x == 8) {
        ejeY = true;
    }
    if(y == 1 || y == 8) {
        ejeX = true;
    }

    if(ejeX && ejeY) {
        //CASO 1: 3 posiciones
        return 3;
    }else if(ejeX || ejeY) {
        //CASO 2: 5 posiciones
        return 5;
    }else{
        //CASO 3: 8 posiciones
        return 8;
    }
}

int Alrededores(int a, int b, int desde, int hasta, int* suma) {
    int c = Calcular(a, b);
    switch(c) {
        case 3:
            {
                int xStart = 1;
                int xEnd = 2;
                int yStart = 1;
                int yEnd = 2;
                if(a == 8) {
                    xStart = 7;
                    xEnd = 8;
                }
                if(b == 8) {
                    yStart = 7;
                    yEnd = 8;
                }
                for(int x = xStart; x <= xEnd ; x++) {
                    for(int y = yStart; y <= yEnd; y++) {
                        if(!(x == a && y == b)) {
                            //cout << "CASO 1: " << x << "," << y << endl;
                            *suma = *suma + 1;
                            if(desde != hasta) {
                                Alrededores(x, y, 1, hasta-1, suma);
                            }
                        }
                    }
                }
            }
            break;
        case 5:
            {
                int xStart = 0;
                int xEnd = 0;
                int yStart = 0;
                int yEnd = 0;

                if(a == 1) {
                    xStart = a;
                    xEnd = a+1;
                }else if(a == 8){
                    xStart = a-1;
                    xEnd = a;
                }else{
                    xStart = a-1;
                    xEnd = a+1;
                }

                if(b == 1) {
                    yStart = b;
                    yEnd = b+1;
                }else if(b == 8){
                    yStart = b-1;
                    yEnd = b;
                }else{
                    yStart = b-1;
                    yEnd = b+1;
                }

                for(int x = xStart; x <= xEnd ; x++) {
                    for(int y = yStart; y <= yEnd; y++) {
                        if(!(x == a && y == b)) {
                            //cout << "CASO 2: " << x << "," << y << endl;
                            *suma = *suma + 1;
                            if(desde != hasta) {
                                Alrededores(x, y, 1, hasta-1, suma);
                            }
                        }
                    }
                }
            }
            break;
        case 8:
            for(int x = (a-1); x <= (a+1); x++) {
                for(int y = (b-1); y <= (b+1); y++) {
                    if(!(x == a && y == b)) {
                        //cout << "CASO 3: " << x << "," << y << endl;
                        *suma = *suma + 1;
                        if(desde != hasta) {
                            Alrededores(x, y, 1, hasta-1, suma);
                        }
                    }
                }
            }
            break;
        default:
            break;
    }
    return *suma;
}
