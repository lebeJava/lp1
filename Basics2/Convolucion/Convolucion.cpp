#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main() {
  //cout << ((255*4) + (4*(255*2)) + (255*4)) << endl;
  const int kernel2[3][3] = {
    {1, 2, 1},
    {2, 4, 2},
    {1, 2, 1}
  };
  const int kernel[3][3] = {
    {0, 1, 0},
    {1, -4, 1},
    {0, 1, 0}
  };
  const int kernel1[3][3] = {
    {-1, -1, -1},
    {1, 8, -1},
    {-1, -1, -1}
  };
  CImg<int> in("in.jpg");
  int width = in.width();
  int height = in.height();
  int output[height][width];
  int convolucion[height][width];
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      int r = (int)in(w,h,0,0);
      int g = (int)in(w,h,0,1);
      int b = (int)in(w,h,0,2);
      output[h][w] = (r + g + b) / 3;
      cout << output[h][w] << " ";
    }
    cout << endl;
  }
  cout << "______________________________________" << endl;
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      //Centro
      convolucion[h][w] = output[h][w] * kernel[1][1];
      //Cruz vertical
      if(h-1 >= 0) {
        convolucion[h][w] += output[h-1][w] * kernel[0][1];
      }
      if(h+1 <= height) {
        convolucion[h][w] += output[h+1][w] * kernel[2][1];
      }
      //Cruz horizontal
      if(w-1 >= 0) {
        convolucion[h][w] += output[h][w-1] * kernel[1][0];
      }
      if(w+1 <= width) {
        convolucion[h][w] += output[h][w+1] * kernel[1][2];
      }
      //Esquinas
      if(h-1 >= 0 && w-1 >= 0) {
        convolucion[h][w] += output[h-1][w-1] * kernel[0][0];
      }
      if(h+1 >= 0 && w-1 >= 0) {
        convolucion[h][w] += output[h+1][w-1] * kernel[2][0];
      }
      if(h-1 >= 0 && w+1 >= 0) {
        convolucion[h][w] += output[h-1][w+1] * kernel[0][2];
      }
      if(h+1 >= 0 && w+1 >= 0) {
        convolucion[h][w] += output[h+1][w+1] * kernel[2][2];
      }
      /*if(h-1 >= 0 && w-1 >= 0 && h+1 >= height && w+1 <= width) {
        convolucion[h][w] += output[h-1][w-1] * kernel[0][0];
        convolucion[h][w] += output[h][w-1] * kernel[1][0];
        convolucion[h][w] += output[h-1][w] * kernel[0][1];

        convolucion[h][w] += output[h+1][w+1] * kernel[2][2];
        convolucion[h][w] += output[h][w+1] * kernel[1][2];
        convolucion[h][w] += output[h+1][w] * kernel[2][1];

        convolucion[h+1][w-1] += output[h+1][w-1] * kernel[2][0];
        convolucion[h-1][w+1] += output[h-1][w+1] * kernel[0][2];
      }*/
      if(w == 0 || h == 0 || w == width-1 || h == height-1) {
        convolucion[h][w] = 0;
      }
      cout << convolucion[h][w] << " ";
    }
    cout << endl;
  }
  int mayor, menor;
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      if(w == 0 && h == 0) {
        menor = convolucion[h][w];
      }else if(menor > convolucion[h][w]) {
        menor = convolucion[h][w];
      }
    }
  }
  cout << "Menor" <<  menor << endl;
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      convolucion[h][w] -= menor;
    }
  }
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      if(w == 0 && h == 0) {
        mayor = convolucion[h][w];
      }
      if(mayor < convolucion[h][w]) {
        mayor = convolucion[h][w];
      }
    }
  }
  cout << "______________________________________" << endl;
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      convolucion[h][w] = (convolucion[h][w] * 255) / mayor;
      if(convolucion[h][w] >= 120 && convolucion[h][w] <= 124) {
        convolucion[h][w] = 0;
      }else{
        convolucion[h][w] = 255;
      }
      //convolucion[h][w] = 255 - convolucion[h][w];
      cout << convolucion[h][w] << " ";
    }
    cout << endl;
  }
  CImg<int> escala(output[0], width, height);
  escala.save("escala.jpg");
  CImg<int> out(convolucion[0], width, height);
  out.save("out.jpg");
  (in, escala, out).display();
  return 0;
}
