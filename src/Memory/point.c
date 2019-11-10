#include "stdio.h"

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4, 5};
  int *p1 = a, *p2 = p1++;
  printf("%d, %d\n", *p1, *p2);
  
  return 0;
}
