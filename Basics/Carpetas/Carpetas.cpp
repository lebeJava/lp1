#include <iostream>
using namespace std;

int main(){
    int f, c;

	cout << "Ingresa las cantidad de filas: ";
	cin >> f;
    if(!f || f <= 0){
        cout << "ERROR";
        return 0;
	}
	cout << "Ingresa la cantidad de columnas: ";
    cin >> c;
    if(!c || c <= 0){
        cout << "ERROR";
        return 0;
    }
    if((f * c) % 2 == 0){
        cout << f << " * " << c << " => SI";
    }else{
        cout << f << " * " << c << " => NO";
    }
	return 0;
}
