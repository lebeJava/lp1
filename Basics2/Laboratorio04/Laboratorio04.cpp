#include <iostream>
using namespace std;

//int area (int length, int width); //Error, no existe
double area (double x, double y);
int area (int x, int y, char unit);

int main () {
  //int x = area(2, 3); //Error
  double x = area(2.2, 3.3);
  int y = area(2, 3, 'A');
}

// int area(int x, int y) { return x*Y; } // es esta
//Funciones con mismo nombre, pero diferentes tipos no coinciden y son ignoradas

double area(double x, double y) { return x*y; }

int area(int x, int y, char unit) { return x*y; }
