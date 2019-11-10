#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;

// sqlist
typedef struct{
	ElemType data[MaxSize];
	int length;
} SqList;
bool ListShow(SqList &l);