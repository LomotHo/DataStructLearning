#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 32

void str_info(char *str);

int main() {
  int count = COUNT;
  int output[COUNT] = {0};
  FILE *fp, *fp2;
  int i;

  // ** write file
  if ((fp = fopen("./data.txt", "a+")) == NULL) {
    printf("open file error");
    return -1;
  }
  for (i = 0; i < 16; i++) {
    fprintf(fp, "%d ", i);
  }
  fclose(fp);

  // ** read file
  if ((fp = fopen("./data.txt", "r+")) == NULL) {
    printf("open file error");
    return -1;
  }

  i = 0;
  while (!feof(fp) && i < count) {
    fscanf(fp, "%d ", &output[i]);
    i++;
    // printf("%c", fgetc(fp));
  }

  for (int i = 0; i < count; i++) {
    printf("%d | ", output[i]);
  }
  fclose(fp);

  return 0;
}

void str_info(char *str) {
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
}
