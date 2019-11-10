#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int length = 8;
  char* str1 = malloc(sizeof(int) * length);
  char* str2 = malloc(sizeof(int) * length);
  str2 = str1;
  free(str1);
  free(str2);

  return 0;
}
