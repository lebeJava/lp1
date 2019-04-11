#include <iostream>
using namespace std;
#define DEBUG 0

int Calcular(int x, int y, int j) {
    int suma = 0;
    int restaX = 0;
    int restaY = 0;
    for(int i = 1; i <= j; i++) {
        if((x-i) < 1 || (x+i) > 8) {
            restaX++;
        }
        if((y-i) < 1 || (y+i) > 8) {
            restaY++;
        }
    }
    restaX = ((j*2) + 1) - restaX;
    restaY = ((j*2) + 1) - restaY;
    if(restaX > 8) restaX = 8;
    if(restaY > 8) restaY = 8;
    return restaX*restaY;
}

int main()
{
    int x, y, j;
    #if DEBUG
    int T;
    cin>>T;
    while(T--)
    {
        cin >> x;
        cin >> y;
        cin >> j;
        if(j >= 7) {
            cout<< 64 <<endl;
        }else{
            cout<< Calcular(x, y, j) <<endl;
        }
    }
    #else
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
    if(j >= 7) {
        cout << 64;
    }else{
        cout << Calcular(x, y, j);
    }
    #endif
    return 0;
}
