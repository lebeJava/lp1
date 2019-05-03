#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int num_random;
  srand(time(NULL));
  num_random = rand() % 10 + 1;
  printf("%d\n", num_random);
  return 0;
}
