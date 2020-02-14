#include <stdio.h>
#define MaxSize 50
#define ElemType int

// 声明栈
ElemType stack[MaxSize];
int top = -1;

int main() {
  // 初始化数据
  int a = 2, b = 0;

  // a入栈 [简写 push(stack, a)]
  stack[++top] = a;

  // 出栈，赋值给x  [简写 pop(stack)]
  b = stack[top--];

  return 0;
}
