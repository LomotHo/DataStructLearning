#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

//按序号查找结点值
LNode *GetElem(LinkList L, int postion) {
	int j = 0;
	LNode *p = L;
	if (postion<0) {
		return NULL;
	}
	while(p&&j<postion){
		// if (p->next==NULL) {
		// 	return NULL;
		// }
		p = p->next;
		j++;
	}
	return p;
}

LNode *LocateElem(LinkList L, ElemType e) {
	LNode *p = L->next;
	while(p!=NULL && p->data != e){
		p = p->next;
	}
	return p;
}

bool ListFrontInsert(LinkList L,int i,ElemType e)
{
	LinkList p=GetElem(L,i-1);
	if(NULL==p)
	{
		return false;
	}
	LinkList s=(LNode*)malloc(sizeof(LNode));//为新插入的结点申请空间
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}

//打印链表中每个结点的值
void PrintList(LinkList L)
{
	L=L->next;
	while(L!=NULL)
	{
		printf("%3d",L->data);
		L=L->next;
	}
	printf("\n");
}

LinkList CreatList() {
	int a;
	LNode *s;
	LinkList L;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &a);
	while(a!=999) {
		s = (LNode* )malloc(sizeof(LNode));
		s->data = a;
		s->next = L->next;
		L->next = s;
		scanf("%d", &a);
	}
	return L;
}

LinkList CreatList2() {
	int a;
	LNode *s, *r;
	LinkList L;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	// r=L;
	// scanf("%d", &a);
	// while(a!=999) {
	// 	s = (LNode* )malloc(sizeof(LNode));
	// 	s->data = a;
		
	// 	r->next = s;
	// 	r = s;

	// 	scanf("%d", &a);
	// }
	return L;
}


int main(int argc, char const *argv[]) {
	// LinkList L = CreatList();
	LinkList L = CreatList2();
	LNode *s;

	ListFrontInsert(L, 1, 0);
	ListFrontInsert(L, 1, 3);
	ListFrontInsert(L, 1, 6);
	// ListFrontInsert(L, 999, 8);
	ListFrontInsert(L, 1, 77);

	PrintList(L);
	s = LocateElem(L, 1);
	if (s){
		printf("\nLocateElem: %3d", s->data);
	}
	return 0;
}
