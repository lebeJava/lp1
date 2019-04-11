#include <iostream>
#include <vector>
using namespace std;

vector<int> lista;

int Sospechosos() {
    int suma = 0;
    for(int i = 0; i < lista.size()-1; i++) {
        if(int(lista[i]) != int(lista[i+1])) {
            suma += 2;
        }
    }
    return suma;
}

int main()
{
    cout << "Ingresa la cantidad de numeros: ";
    int T;
    cin >> T;
    cout << "Ingresa los datos separados por espacios (# # # ...): ";
    while(T--)
    {
        int x;
        cin >> x;
        lista.push_back(x);
        if(T == 0) {
            cout << Sospechosos();
        }
    }
    return 0;
}
