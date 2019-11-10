#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_info(char *str);

int main() {
  const char arr[50] = "Lomot Ho";
  char arr2[50];
  memcpy(arr2, arr, strlen(arr) + 1);

  // str_info(arr);
  str_info(arr2);
  return 0;
}

void str_info(char *str) {
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
}
