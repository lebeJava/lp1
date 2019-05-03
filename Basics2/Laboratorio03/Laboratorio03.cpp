#include <iostream>
using namespace std;
int area (int length, int width);

int main () {
  /*int x4 = arena(10, -7); // ok : pero ractángulo
  int x5 = area(10.7, 9.3); // ok : pero llama a area(10, 9)
  int x6 = area(100, 9999); // ok : pero trunca el resultado
  */
  return area(4, 4);
}

int area(int length, int width) {
  return length*width;
}
