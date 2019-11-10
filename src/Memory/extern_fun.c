#include <stdio.h>
#include <string.h>

// #include "extern_fun.h"

void str_info(char *str);
void swap(char *p, char *q);
void arg(int *a);
void test0();

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

void test0() {
  printf("success\n");
}