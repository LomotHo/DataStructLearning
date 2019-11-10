#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct BSTNode {
  KeyType key;
  struct BSTNode *lchild, *rchild;
} BSTNode, *BiTree;

KeyType BSTInsert(BiTree &T, KeyType key) {
  if (T == NULL) {
    T = (BiTree)malloc(sizeof(BSTNode));
    T->key = key;
    T->lchild = T->rchild = NULL;
    return 1;
  }
  if (key >= T->key) {
    return BSTInsert(T->rchild, key);
  }
  if (key < T->key) {
    return BSTInsert(T->lchild, key);
  }
  return -1;
}

bool InitBST(BiTree &T, KeyType str[], int strLength) {
  T = NULL;
  for (int i = 0; i < strLength; i++) {
    BSTInsert(T, str[i]);
  }
  return true;
}

bool InOrder(BiTree T) {
  if (T != NULL) {
    InOrder(T->lchild);
    printf("%3d", T->key);
    InOrder(T->rchild);
  }
  return true;
}

bool PreOrder(BiTree T) {
  if (T != NULL) {
    printf("%3d", T->key);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
  }
  return true;
}

int main(int argc, char const *argv[]) {
  BiTree T;
  KeyType str[] = {54, 20, 66, 40, 28, 79, 58};
  InitBST(T, str, 7);
  printf("%d\n", BSTInsert(T, 67));
  InOrder(T);
  printf("\n");
  PreOrder(T);
  return 0;
}
