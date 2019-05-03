#include <iostream>
using namespace std;
class Bad_area {};
int area(int length, int width) {
  if(length <= 0 || width <= 0) throw Bad_area{};
  return length*width;
}

int main() {
  try {
    int x = -1;
    int y = 2;
    int z = 4;
    int area1 = area(x, y);
    //int area2 = framed_area(1, z); //Error: No definido
  }catch(exception & e) {
    cerr << "¡Oops! Argumentos invalidos para area()" << endl;
    return 1;
  }
  return 0;
}
