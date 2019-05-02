#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main() {
  cout << "Ingresa las dimensiones de la matriz A:" << endl;
  cout << "Ancho: ";
  int w1;
  cin >> w1;
  cout << "Alto: ";
  int h1;
  cin >> h1;
  cout << "\nIngresa las dimensiones de la matriz B:" << endl;
  cout << "Ancho: ";
  int w2;
  cin >> w2;
  cout << "Alto: ";
  int h2;
  cin >> h2;

  if(h1 != w2) {
    cout << "\nNo es posible multiplicar." << endl;
  }else{
    int a[w1][h1];
    int b[w2][h2];
    int c[w1][h2];
    int random;
    srand (time (NULL));
    cout << "\nMatriz A" << endl;
    for(int w = 0; w < w1; w++) {
      for(int h = 0; h < h1; h++) {
        random = rand() % 10;
        a[w][h] = random;
        cout << random << " ";
      }
      cout << endl;
    }
    cout << "Matriz B" << endl;
    for(int w = 0; w < w2; w++) {
      for(int h = 0; h < h2; h++) {
        random = rand() % 10;
        b[w][h] = random;
        cout << random << " ";
      }
      cout << endl;
    }
    cout << "Matriz C, producto de A * B" << endl;
    for (int i = 0; i < w1; i++) {
      for (int j = 0; j < h2; j++) {
        c[i][j] = 0;
        for (int k = 0; k < w2; k++) {
          c[i][j] += a[i][k] * b[k][j];
        }
      }
    }
    for (int i = 0; i < w1; i++) {
      for (int j = 0; j < h2; j++) {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
