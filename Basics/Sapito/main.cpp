#include <iostream>
using namespace std;

int Saltos(int maximo) {
    int saltos = 1;
    int distancia = 1;
    int sumatoria = 1;
    while(sumatoria < maximo) {
        distancia += 9;
        sumatoria += distancia;
        saltos++;
    }
    return saltos;
}

int main()
{
    cout << "Ingresa la distancia recorrida: ";
    int distancia;
    cin >> distancia;
    cout << Saltos(distancia) << endl;
    return 0;
}
