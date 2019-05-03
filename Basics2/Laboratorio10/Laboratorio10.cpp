#include <stdio.h>
#include <stlib.h>
#include <time.h>

int main() {
  int num_random;
  srand(time(NULL));
  num_random = rand() % 10 + 1;
  printf("%d", num_random);
  return 0;
}
