#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 32

void str_info(char *str);
void swap(char *p, char *q);
void arg(int *a);

int main() {
  int count = COUNT;
  int output[COUNT] = {0};
  FILE *fp, *fp2;
  int i, line1, line2, pos1, pos2;
  char ch1, ch2;

  // ** diff file
  // ** diff file
  if ((fp = fopen("./data.txt", "r+")) == NULL ||
      (fp2 = fopen("./data2.txt", "r+")) == NULL) {
    printf("open file error");
    return -1;
  }

  line1 = 1, line2 = 1;
  pos1 = 0, pos2 = 0;
  while (!feof(fp) && !feof(fp2)) {
    ch1 = fgetc(fp);
    ch2 = fgetc(fp2);
    if (ch1 == '\n') {
      line1++;
      pos1 = 0;
    } else {
      pos1++;
    }

    if (ch2 == '\n') {
      line2++;
      pos2 = 0;
    } else {
      pos2++;
    }

    if (ch1 != ch2) {
      printf(
          "diff char: %c | %c, cruent line: %d | %d, cruent position: %d | %d "
          "\n",
          ch1, ch2, line1, line2, pos1, pos2);
    }
  }

  fclose(fp);
  fclose(fp2);

  return 0;
}

void str_info(char *str) {
  printf("data: %s, | addr: %p, | length:%lu\n", str, str, strlen(str));
}

void swap(char *p, char *q) {
  int length = strlen(p) > strlen(q) ? strlen(p) + 1 : strlen(q) + 1;
  // printf("length: %d\n", length);
  char temp[length+1];
  strcpy(temp, p);
  strcpy(p, q);
  strcpy(q, temp);
}

void arg(int *a) { printf("arg: %d\n", *a); }
