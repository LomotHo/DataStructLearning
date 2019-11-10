#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // int length = 8;
  // int* a = malloc(sizeof(int) * length);
  // a[0] = 1;
  // a[1] = 2;
  // printf("size: %lu\n", sizeof(a));
  // printf("a0: %d\n", a[0]);

  char *str = malloc(sizeof(char) * 4);
  char *str2 = malloc(sizeof(char) * 4);

  printf("bool: %d\n", str == NULL);
  // char *str;
  strcpy(str, "1234567812345678xxxx12345678123456781234567812345678:wq::");
  strcpy(str2, "1234567812345678");

  printf("str info: \n");
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
  printf("data: %s, | addr: %p, | length:%lu\n", str2, str2, strlen(str2));

  return 0;
}
