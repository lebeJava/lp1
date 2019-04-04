#include <iostream>
using namespace std;

int main() {
    cout << "Ingresa la cantidad a convertir: ";
	float cantidad;
	cin >> cantidad;
	cout << "Ingresa la moneda actual (Dolares(d), Yenes(y), Euros(e), Libras(l), Yuan(a), Shekels(s)): ";
	char actual;
	cin >> actual;
	if(actual != 'd') {
		switch(actual) {
			case 'y': {
				cout << cantidad << " yen(es) equivalen a " << cantidad*0.0090 << " dolar(es).";
				break;
			}
			case 'e': {
				cout << cantidad << " euro(s) equivalen a " << cantidad*1.12 << " dolar(es).";
				break;
			}
			case 'l': {
				cout << cantidad << " libra(s) equivalen a " << cantidad*1.32 << " dolar(es).";
				break;
			}
			case 'a': {
				cout << cantidad << " yuan(es) equivalen a " << cantidad*0.15 << " dolar(es).";
				break;
			}
			case 's': {
				cout << cantidad << " shekel(s) equivalen a " << cantidad*0.28 << " dolar(es).";
				break;
			}
			default: {
				cout << "La moneda '" << actual << "' no se reconoce.";
				break;
			}
		}
	}else{
		cout << "Ingresa la moneda a convertir (Yenes(y), Euros(e), Libras(l), Yuan(a), Shekels(s)): ";
		char nuevo;
		cin >> nuevo;
		switch(nuevo) {
			case 'y': {
				cout << cantidad << " dolar(es) equivalen a " << cantidad*111.47 << " yen(es).";
				break;
			}
			case 'e': {
				cout << cantidad << " dolar(es) equivalen a " << cantidad*0.89 << " euro(s).";
				break;
			}
			case 'l': {
				cout << cantidad << " dolar(es) equivalen a " << cantidad*0.76 << " libra(s).";
				break;
			}
			case 'a': {
				cout << cantidad << " dolar(es) equivalen a " << cantidad*6.72 << " yuan(es).";
				break;
			}
			case 's': {
				cout << cantidad << " dolar(es) equivalen a " << cantidad*3.59 << " shekel(s).";
				break;
			}
			default: {
				cout << "La moneda '" << nuevo << "' no se reconoce.";
				break;
			}
		}
	}
	return 0;
}
