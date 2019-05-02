#include <iostream>
using namespace std;

int main() {
    cout << "Ingresa la cantidad a convertir: ";
	float cantidad;
	cin >> cantidad;
	cout << "Ingresa la moneda actual (Dolares(d), Yenes(y), Euros(e), Libras(l)): ";
	char actual;
	cin >> actual;
	if(actual != 'd') {
	    if(actual == 'y') {
	        cout << cantidad << " yen(es) equivalen a " << cantidad*0.0090 << " dolar(es).";
	    }else if(actual == 'e') {
	        cout << cantidad << " euro(s) equivalen a " << cantidad*1.12 << " dolar(es).";
	    }else if(actual == 'l') {
	        cout << cantidad << " libra(s) equivalen a " << cantidad*1.32 << " dolar(es).";
        }else{
            cout << "La moneda '" << actual << "' no se reconoce.";
		}
	}else{
		cout << "Ingresa la moneda a convertir (Yenes(y), Euros(e), Libras(l)): ";
		char nuevo;
		cin >> nuevo;
		if(nuevo == 'y') {
		    cout << cantidad << " dolar(es) equivalen a " << cantidad*111.47 << " yen(es).";
		}else if(nuevo == 'e') {
		    cout << cantidad << " dolar(es) equivalen a " << cantidad*0.89 << " euro(s).";
		}else if(nuevo == 'l') {
		    cout << cantidad << " dolar(es) equivalen a " << cantidad*0.76 << " libra(s).";
		}else{
		    cout << "La moneda '" << nuevo << "' no se reconoce.";
		}
	}
	return 0;
}
