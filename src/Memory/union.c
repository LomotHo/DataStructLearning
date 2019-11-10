#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct S1 {
  int a;
  char b;
} S1;
typedef union U1 {
  int a;
  char b;
} U1;

typedef union U1 U1;

int main() {
  U1 u1;
  u1.a = 0xffffffff;
  u1.b = 'C';
  printf("%x\n", u1.a);
  printf("%lu", sizeof(int));

  return 0;
}
