#include "function.h"

// typedef int BiElemType;
// typedef struct BiTNode {
//   BiElemType key;
//   struct BiTNode *lchild, *rchild;
// } BiTNode, *BiTree;

// BST 二叉排序树 插入
BiElemType BSTInsert(BiTree &T, BiElemType key) {
  if (T == NULL) {
    T = (BiTree)malloc(sizeof(BiTNode));
    T->c = key;
    T->lchild = T->rchild = NULL;
    return 1;
  }
  if (key >= T->c) {
    return BSTInsert(T->rchild, key);
  }
  if (key < T->c) {
    return BSTInsert(T->lchild, key);
  }
  return -1;
}

// 初始化二叉树 BST
bool InitBST(BiTree &T, BiElemType str[], int strLength) {
  T = NULL;
  for (int i = 0; i < strLength; i++) {
    BSTInsert(T, str[i]);
  }
  return true;
}

// 中序遍历 二叉树 不指定二叉树类型
bool InOrder(BiTree T) {
  if (T != NULL) {
    InOrder(T->lchild);
    printf("%3d", T->c);
    InOrder(T->rchild);
  }
  return true;
}

// 先序遍历 二叉树 不指定二叉树类型
bool PreOrder(BiTree T) {
  if (T != NULL) {
    printf("%3d", T->c);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
  }
  return true;
}

// int main(int argc, char const *argv[]) {
//   BiTree T;
//   BiElemType str[] = {54, 20, 66, 40, 28, 79, 58};
//   InitBST(T, str, 7);
//   printf("%d\n", BSTInsert(T, 67));
//   InOrder(T);
//   printf("\n");
//   PreOrder(T);
//   return 0;
// }
