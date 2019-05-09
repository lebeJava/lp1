#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int longitud;
    cin >> longitud;
    int ciclos;
    cin >> ciclos;
    int limite;
    cin >> limite;

    int desde, hasta;

    int plantas[longitud];
    for(int i = 0; i < longitud; i++) {
      plantas[i] = 0;
    }
    for(int c = 0; c < ciclos; c++) {
      cin >> desde;
      cin >> hasta;
      for(int i = 0; i < longitud; i++) {
        if(i >= desde && i <= hasta) {
          if(plantas[i] < limite) {
            plantas[i] = 0;
          }
        }else{
          plantas[i] += 1;
        }
      }
    }

    int vivas = 0;

    for(int i = 0; i < longitud; i++) {
      if(plantas[i] < limite) {
        vivas++;
      }
    }

    cout << vivas << " ";

    for(int i = 0; i < longitud; i++) {
      if(plantas[i] < limite) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
