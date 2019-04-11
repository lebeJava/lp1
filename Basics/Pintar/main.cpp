#include <iostream>
#include <vector>
using namespace std;

vector<int> lista;

bool Posible() {
    bool resultado = true;
    int suma = 0;
    for(int i = 0; i < lista.size()-1; i++) {
        if(int(lista[i]) == int(lista[i+1])) {
            suma++;
        }else{
            if((suma % 2) != 0) {
                resultado = false;
                break;
            }
        }
    }
    return resultado;
}

int main()
{
    cout << "Ingresa la cantidad de pixeles: ";
    int T;
    cin >> T;
    cout << "Ingresa los colores separados por espacios (# # # ...): ";
    while(T--)
    {
        int x;
        cin >> x;
        lista.push_back(x);
        if(T == 0) {
            if(Posible()) {
                cout << "SI es posible" << endl;
            }else{
                cout << "No es posible" << endl;
            }
        }
    }
    return 0;
}
