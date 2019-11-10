#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int length = 16;
  char *str = malloc(sizeof(char) * length);
  char *str2 = malloc(sizeof(char) * length);
  // printf("strIsNull: %d\n", str==NULL);

  printf("input str: ");
  gets(str);
  // scanf("%s", str);

  printf("str info: \n");
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
  printf("data: %s, | addr: %p, | length:%lu\n", str2, str2, strlen(str2));
  // free(str);
  return 0;
}
