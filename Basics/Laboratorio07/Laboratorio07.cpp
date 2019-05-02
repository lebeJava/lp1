#include <iostream>
using namespace std;

int main()
{
    cout << "Por favor ingrese un digito: " << endl;
    char a;
    cin >> a;
    switch(a) {
        case '0':case '2':case '4':case '6':case '8':
            cout << "Es par." << endl;
            break;
        case '1':case '3':case '5':case '7':case '9':
            cout << "Es impar." << endl;
            break;
        default:
            cout << "No es un digito." << endl;
            break;
    }
    return 0;
}
