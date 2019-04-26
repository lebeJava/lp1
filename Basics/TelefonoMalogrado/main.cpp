#include <iostream>
#include <vector>
using namespace std;
#define DEBUG 1

vector<int> lista;

int Sospechosos() {
    int suma = 0;
    bool found = false;
    for(int i = 0; i < lista.size()-1; i++) {
        if(int(lista[i]) != int(lista[i+1])) {
            if(found) {
                suma += 1;
            }else{
                found = true;
                suma += 2;
            }
        }else{
            found = false;
        }
    }
    return suma;
}

int main()
{
    #if DEBUG
    int T;
    cin>>T;
    while(T--)
    {
        int t;
        cin>>t;
        while(t--)
        {
            int x;
            cin >> x;
            lista.push_back(x);
            if(t == 0) {
                cout << Sospechosos() << endl;
            }
        }
        lista.clear();
    }
    #else
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
    #endif
    return 0;
}
