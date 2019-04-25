#include <iostream>
#include <vector>
using namespace std;

vector<int> lista;

bool EsPosible() {
    int count = 0;
    int actual = lista[0];
    for(int i = 1; i < lista.size(); i++) {
        if(actual == lista[i]) {
            count++;
            if(count == 2) {
                return true;
                break;
            }
        }else{
            count = 0;
        }
        actual = lista[i];
    }
    return false;
}

int main()
{
    cout << "Ingresa la longitud: ";
    int L;
    cin >> L;
    cout << "Ingresa los datos separados por espacios (# # # ...): ";
    while(L--)
    {
        int x;
        cin >> x;
        lista.push_back(x);
        if(L == 0) {
            if(EsPosible()) {
                cout << "SI es posible";
            }else{
                cout << "NO es posible";
            }
        }
    }
    return 0;
}
