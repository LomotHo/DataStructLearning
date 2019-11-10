#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
  FILE *fp1, *fp2;
  char buf[1024];
  fp1 = fopen("./data.txt", "r");
  fp2 = fopen("./data2.txt", "w");
  while(!feof(fp1)) {
    memset(buf, 0, sizeof(buf));
    fgets(buf, sizeof(buf), fp1);
    fputs(buf, fp2);
  }

  fclose(fp1);
  fclose(fp2);
  return 0;
}
