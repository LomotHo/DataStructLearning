#include <stdio.h>

int partition(int *a, int start, int end);
void output_arr(int *a, int start, int end);
int qs(int *a, int start, int end);

int main(int argc, char const *argv[]) {
  int a[8] = {3,5,1,2,8,7,6,4};
  qs(a, 0, 7);
  return 0;
}

int partition(int *a, int start, int end) {
  int temp = a[start];
  while(start<end) {
    while (a[end] >= temp && start < end) end--;
    a[start] = a[end];
    // output_arr(a, start, end);
    while (a[start] <= temp && start < end) start++;
    a[end] = a[start];
    // output_arr(a, start, end);
  }
  a[start] = temp;
  // output_arr(a, start, end);
  // printf("\n");
  return start;
}

int qs(int *a, int start, int end){
  int mid;
  if (start >= end) {
    return 0;
  }
  mid = partition(a, start, end);
  qs(a, start, mid-1);
  qs(a, mid+1, end);
  return 0;
};

void output_arr(int *a, int start, int end) {
  for(int i = 0; i < 8; i++) {
    printf("%d | ", a[i]);
  }
  printf("start: %d | end: %d", start, end);
  printf("\n");
}
