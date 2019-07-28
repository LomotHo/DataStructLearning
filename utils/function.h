#include <stdio.h>
#include <stdlib.h>

// 二叉树数据结构定义 不指定树的类型
typedef char BiElemType;
typedef struct BiTNode{
	BiElemType c;//c就是书籍上的data
	struct BiTNode *lchild;
	struct BiTNode *rchild;
}BiTNode,*BiTree;

typedef struct tag{
	BiTree p;
	struct tag *pnext;
}tag_t,*ptag_t;
BiElemType BSTInsert(BiTree &T, BiElemType key);
bool InitBST(BiTree &T, BiElemType str[], int strLength);
bool InOrder(BiTree T);

//栈的相关数据结构
#define MaxSize 50
    typedef BiTree ElemType;
typedef struct{
	ElemType data[MaxSize];
	int top;
}SqStack;
void InitStack(SqStack &S);
bool StackEmpty(SqStack &S);
bool Push(SqStack &S,ElemType x);
bool Pop(SqStack &S,ElemType &x);
bool GetTop(SqStack &S,ElemType &x);

//队列的相关数据结构
typedef struct LinkNode{
	ElemType data;
	struct LinkNode *next;
}LinkNode;
typedef struct{
	LinkNode *front,*rear;
}LinkQueue;
void InitQueue(LinkQueue &Q);
bool IsEmpty(LinkQueue Q);
void EnQueue(LinkQueue &Q,ElemType x);
bool DeQueue(LinkQueue &Q,ElemType &x);
