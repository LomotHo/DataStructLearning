#include "../utils/function.h"

// void PreOrder2(BiTree T) {
//   SqStack stk;
//   InitStack(stk);
//   BiTNode *p=T;

//   while (p || !StackEmpty(stk)) {
//     while(p){
//       printf(" %c", p->c);
//       Push(stk, p);
//       p = p->lchild;
//     }
//   }
// }

void InOrder2(BiTree T) {
  SqStack stk;
  InitStack(stk);
  BiTNode *p = T;
  while (p || !StackEmpty(stk)) {
    if (p) {
      Push(stk, p);
      p = p->lchild;
    }
    else {
      Pop(stk, p);
      putchar(p->c);
      p = p->rchild;
    }
  }
}

void LevelOrder(BiTree T) {
  LinkQueue que;
  BiTNode * p;

  InitQueue(que);
  EnQueue(que, T);

  while (!IsEmpty(que)) {
    DeQueue(que, p);
    putchar(p->c);
    if (p->lchild!=NULL) {
      EnQueue(que, p->lchild);
    } 
    if (p->rchild != NULL){
      EnQueue(que, p->rchild);
    }
  }
}

int main(int argc, char const *argv[]) {
  BiTree T;

  // BiElemType str[] = {54, 20, 66, 40, 28, 79, 58};
  BiElemType str[] = {'a', 'g', 'h', 'e', 'd', 'f', 'b'};

  InitBST(T, str, 7);
  printf("%d\n", BSTInsert(T, 'c'));
  // InOrder(T);
  // PreOrder(T);
  InOrder2(T);
  printf("\n");
  LevelOrder(T);
  return 0;
}
