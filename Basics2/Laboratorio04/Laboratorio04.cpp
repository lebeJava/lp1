int area (int length, int width);

int main () {
  int x = area(2, 3);
}

// int area(int x, int y) { return x*Y; } // es esta
//Funciones con mismo nombre, pero diferentes tipos no coinciden y son ignoradas

double area(double x, double y) { return x*y; }

int area(int x, int y, char unit) { return x*y; }
