#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct stackNode {
	ElemType data;
	struct stackNode *next;
}stackNode;

bool InitStack(stackNode* &S) {
	S->next = NULL;
	return true;
}

bool StackEmpty(stackNode* &S) {
	if (S->next == NULL) {
		return true;
	} 
	else {
		return false;
	}
}

bool Push(stackNode* &S, ElemType x){
	stackNode *topNode;
	topNode = (stackNode*)malloc(sizeof(stackNode));
	topNode->data = x;
	topNode->next = S->next;
	S->next = topNode;
	return true;
}

bool Pop(stackNode* &S, ElemType &x){
	stackNode *topNode;
	if (!StackEmpty(S)) {
		topNode = S->next;
		x = topNode->data;
		S->next = S->next->next;
		return true;
	}
	else {
		return false;
	}
}

// stackNode *GetElem(stackNode* L, int postion) {
// 	int j = 0;
// 	stackNode *p = L;
// 	if (postion<0) {
// 		return NULL;
// 	}
// 	while(p&&j<postion){
// 		// if (p->next==NULL) {
// 		// 	return NULL;
// 		// }
// 		p = p->next;
// 		j++;
// 	}
// 	return p;
// }

// bool ListFrontInsert(stackNode* L,int i,ElemType e)
// {
// 	stackNode* p=GetElem(L,i-1);
// 	if(NULL==p)
// 	{
// 		return false;
// 	}
// 	stackNode* s=(stackNode*)malloc(sizeof(stackNode));//为新插入的结点申请空间
// 	s->data=e;
// 	s->next=p->next;
// 	p->next=s;
// 	return true;
// }

// void PrintList(stackNode* L)
// {
// 	L=L->next;
// 	while(L!=NULL)
// 	{
// 		printf("%3d",L->data);
// 		L=L->next;
// 	}
// 	printf("\n");
// }

int main(int argc, char const *argv[]) {
	stackNode *S;
	S = (stackNode*)malloc(sizeof(stackNode));
	// S->next = NULL;

	ElemType x;
	InitStack(S);
	Push(S, 6);
	Push(S, 7);
	Push(S, 9);

// PrintList(S);

	if (Pop(S, x)) {
		printf("%d\n", x);
	}

	if (Pop(S, x)) {
		printf("%d\n", x);
	}

	if (Pop(S, x)) {
		printf("%d\n", x);
	}

	return 0;
}
