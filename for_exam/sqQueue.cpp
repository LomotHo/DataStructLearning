#include <stdio.h>
#define MaxSize 50
#define ElemType int

// 声明 初始化队列
ElemType queue[MaxSize];
int front = 0, rear = 0;
int enQueue(&queue, data);


int main() {
  if ((rear+1)%MaxSize == front) {
    printf("队满\n")；
    return 0;
  }
  queue[(rear+1)%MaxSize]
  return 0;
}