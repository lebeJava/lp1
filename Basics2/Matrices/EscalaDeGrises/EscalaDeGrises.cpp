#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main() {
  CImg<int> in("in.jpg");
  int width = in.width();
  int height = in.height();
  int output[height][width];
  for (int w = 0; w < width; w++) {
    for (int h = 0; h < height; h++) {
      int r = (int)in(w,h,0,0);
      int g = (int)in(w,h,0,1);
      int b = (int)in(w,h,0,2);
      output[h][w] = (r + g + b) / 3;
    }
  }
  CImg<int> out(output[0], width, height);
  out.save("out.jpg");
  (in, out).display();
  return 0;
}
