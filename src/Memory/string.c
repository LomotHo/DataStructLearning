#include "string.h"
#include "stdio.h"

void str_info(char *str);

int main() {
  // char src[5] = "abc";
  // char src[] = "abc";
  char *src = "abc";
  // char **src = {"abc", "csd","scfr"};

  src[0] = 'x';
  int len = strlen(src);

  printf("src: %s\n", src);
  printf("len: %d\n", len);
  printf("src3: %c\n", src[3]);

  return 0;
}

void str_info(char *str) {
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
}
