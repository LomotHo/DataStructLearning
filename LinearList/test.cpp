#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int length;
} SqList; 

bool ShowList(SqList &l) {
	for (int i = 0; i < l.length; ++i) {
		printf("%d\n", l.data[i]);
	}
	return true;
}

bool ListInsert(SqList &l, int postion, ElemType e) {
	if (postion <1 || postion>l.length+1 ) {
		printf("insert postion err\n");
		return false;
	}
	if(L.length>=MaxSize) {
		return false;
	}
	for (int i = l.length; i >= postion; i--) {
		l.data[i] = l.data[i-1];
	}
	l.data[postion-1] = e;

	l.length++;
	return true;
}


bool ListDelete(SqList &l, int postion, ElemType &e) {
	if (postion <1 || postion>l.length ) {
		printf("delete postion err\n");
		return false;
	}
	e = l.data[postion-1];
	
	for (int i = postion; i < l.length; i++) {
		l.data[i-1] = l.data[i];
	}

	l.length--;
	return true;
}

int main(int argc, char const *argv[]) {
	SqList l;
	int ret = 0;
	l.data[0] = 1;
	l.data[1] = 5;
	l.data[2] = 9;
	l.length = 3;
	printf("init list\n");
	ShowList(l);

	printf("after insert\n");
	ListInsert(l, 4, 77);
	ShowList(l);

	printf("after delete\n");
	ListDelete(l, 1, ret);
	ShowList(l);
	printf("ret: %d\n", ret);

	
	return 0;
}
