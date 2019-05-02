#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main() {
  CImg<int> in("in.jpg");
  int width = in.width();
  int height = in.height();
  int histograma[256];
  for(int i = 0; i < 256; i++) {
    histograma[i] = 0;
  }

  int v = 0;
  for(int w = 0; w < width; w++) {
    for(int h = 0; h < height; h++) {
      int r = (int)in(w,h,0,0);
      int g = (int)in(w,h,0,1);
      int b = (int)in(w,h,0,2);
      v = (r + g + b) / 3;
      histograma[v] = histograma[v] + 1;
    }
  }

  int mayor = 0;
  for(int i = 0; i < 256; i++) {
    if(mayor < histograma[i]) {
      mayor = histograma[i];
    }
  }

  int output[256][256];
  for(int w = 0; w < 256; w++) {
    int value = (histograma[w] * 255) / (mayor);
    for(int h = 0; h < 256; h++) {
      if(h <= value) {
        output[h][w] = 0;
      }else{
        output[h][w] = 255;
      }
    }
    cout << w << " -- > " << value << endl;
  }
  CImg<int> out(output[0], 256, 256);
  out.rotate(180);
  out.save("out.jpg");
  (in, out).display();
  return 0;
}
