#include <iostream>
using namespace std;

int area (int length, int width);

int main () {
  /*int s1 = area(7; // error : falta)
  int s1 = area(7) // error : falta;
  Int s3 = area(7); // error : Int no es un tipo
  int s4 = area(’7); // error : caracter(falta’)
  */
  return area(4, 4);
}

int area(int length, int width) {
  return length*width;
}
