/*Utilizando el codigo de generacion de numeros aleatorios, implementa el
siguiente juego.
Vacas y toros : El programa tiene un vector que contiene 4 digitos
diferentes (Ej : 3567 pero no 3377). El usuario debe descubrir los
numeros, adivinando varias veces. Digamos que el numero a adivinar es
1234, y el usuario adivina 1359 ; la respuesta seria 1 toro y 1 vaca,
porque adivino correctamente 1 digito (1),en la posicion correcta (eso es
un toro), y adivino correctamente el digito (3) pero en la posicion
equivocada (eso es una vaca). El programa continua hasta que el usuario
obtiene 4 toros.
Haz que el usuario una vez que adivina pueda jugar de nuevo, entonces el
numero a adivinar debe cambiar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int clave[4];

void GenerarClave() {
  int random;
  srand (time (NULL));
  random = rand() % 10;
  clave[0] = random;
  for(int i = 1; i < 4; i++) {
    random = rand() % 10;
    int j = i;
    while(j--) {
      if(random == clave[j]) {
        random = rand() % 10;
        j = i;
      }
    }
    clave[i] = random;
  }
}

int main() {
  int numeros[4];
  int vacas = 0, toros = 0;
  cout << "Bienvenid@ al juego Vacas y Toros" << endl;
  while(toros != 4) {
    vacas = 0, toros = 0;
    GenerarClave();
    cout << "Ingresa los 4 dígitos separados por espacios (# # # #) : ";
    int t = 0;
    while(t < 4) {
      cin >> numeros[t];
      t++;
    }
    for(int i = 0; i < 4; i++) {
      if(clave[i] == numeros[i]) {
        toros++;
      }
      for(int j = 0; j < 4; j++) {
        if(i != j && clave[j] == numeros[i]) {
          vacas++;
        }
      }
      cout << clave[i] << " --> " << numeros[i] << endl;
    }
    cout << "Toros: " << toros << endl;
    cout << "Vacas: " << vacas << endl;
  }
  cout << "Fin del juego" << endl;
  return 0;
}
