#include "Turtle.h"

Turtle T(500,500);

int nivel = 3;

void Dibujar(int n, double longitud, int angulo) {
  if (n <= 0) {
    T.forward(longitud, angulo);
  }else{
    Dibujar(n-1, longitud/3.0, angulo);
    Dibujar(n-1, longitud/3.0, 60);
    Dibujar(n-1, longitud/3.0, -120);
    Dibujar(n-1, longitud/3.0, 60);
  }
}

int main(int argc, char **argv){
  T.display(argc,argv);
  T.move(150, 300);
  Dibujar(nivel, 200, 0);
  Dibujar(nivel, 200, -120);
  Dibujar(nivel, 200, -120);
  glutMainLoop();
}
