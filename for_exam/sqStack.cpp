#include <stdio.h>
#define MaxSize 50
#define ElemType int

// 声明栈
ElemType stack[MaxSize];
int top = -1;

int main() {
  int a = 2;

  // a入栈 [简写 push(stack, a)]
  stack[++top] = a;

  // 出栈，赋值给x  [简写 pop(stack)]
  int x = stack[top--];

  return 0;
}
