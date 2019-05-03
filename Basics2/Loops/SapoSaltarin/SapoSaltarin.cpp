#include <iostream>
using namespace std;

int Saltos(int maximo) {
    int saltos = 1;
    int sumatoria = 1;
    while(sumatoria < maximo) {
        sumatoria += 9;
        saltos++;
    }
    return saltos;
}

int main()
{
    cout << "Ingresa la distancia recorrida: ";
    int distancia;
    cin >> distancia;
    cout << "Saltos: " << Saltos(distancia) << endl;
    return 0;
}
