#include <stdio.h>
#define MaxSize 50
#define ElemType int

// 声明 初始化队列
ElemType queue[MaxSize];
int front = 0, rear = 0;


int main() {
  // 初始化数据
  int a = 2, b = 0;

  // 入队
  if((rear+1)%MaxSize == front) {
    printf("队满，不能入队\n")；
    return 0;
  }
  else {
    // 入队关键操作
    queue(rear) = a;
    rear = (rear+1)%MaxSize
  }

  // 出队
  if((front)%MaxSize == rear) {
    printf("队空，不能出队\n")；
    return 0;
  }else {
    // 出队关键操作
    b = queue(front);
    front = (front+1)%MaxSize
  }

  queue[(rear+1)%MaxSize]
  return 0;
}