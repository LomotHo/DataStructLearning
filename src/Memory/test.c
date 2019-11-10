#include <stdio.h>
int main() {
    //fprintf(stdout,"please input the value a :\n");
    printf("please input the value a :\n");
    int a=0;
    FILE *fp1, *pipe;
    pipe = fopen("./in.pipe", "r");

    while (a!=-1) {
      //fscanf(stdin,"%d",&a);
      scanf("%d", &a);
      if (a >= 0) {
          printf("2333\n");
      }
      else {
          fprintf(stderr,"Error: the value must > 0");
          return 1;
      }
    }

    return 0;
}
