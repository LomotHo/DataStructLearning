#include <stdio.h>
#include <stdlib.h>
#define MaxSize 50


typedef int ElemType;
typedef struct sqStack {
	ElemType data[MaxSize];
	int top;
}sqStack;

bool InitStack(sqStack &S) {
	S.top = -1;
	return true;
}

bool StackEmpty(sqStack &S) {
	if (S.top == -1) {
		return true;
	} 
	else {
		return false;
	}
}

bool Push(sqStack &S, ElemType x){
	S.top++;
	S.data[S.top] = x;
	return true;
}

bool Pop(sqStack &S, ElemType &x){
	if (!StackEmpty(S)) {
		x = S.data[S.top];
		S.top--;
		return true;
	}
	else {
		return false;
	}
}

int main(int argc, char const *argv[]) {
	sqStack S;
	ElemType x;
	InitStack(S);
	Push(S, 6);
	Push(S, 7);
	Push(S, 9);

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
