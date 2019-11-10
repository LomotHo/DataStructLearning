#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <unistd.h>

int main() {
    int a=0;
    FILE *fp1, *pipe;
    char buf[1024];

    pipe = fopen("./pipe", "r");

    memset(buf, 0, sizeof(buf));
    fgets(buf, sizeof(buf), pipe);
    printf("%s", buf);

    //fprintf(stdout,"please input the value a :\n");
    // printf("please input the value a :\n");
    // while (a!=-1) {
    //   //fscanf(stdin,"%d",&a);
    //   scanf("%d", &a);
    //   if (a >= 0) {
    //       printf("2333\n");
    //   }
    //   else {
    //       fprintf(stderr,"Error: the value must > 0");
    //       return 1;
    //   }
    // }

    return 0;
}


