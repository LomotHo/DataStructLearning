
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef int ElemType;
//静态分配
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;

//打印顺序表元素
void PrintList(SqList &L)
{
	for(int i=0;i<L.length;i++)
	{
		printf("%4d",L.data[i]);
	}
	printf("\n");
}

//i代表插入的位置，从1开始
bool ListInsert(SqList &L,int i,ElemType e)
{
	if(i<1||i>L.length+1)//判断要插入的位置是否合法
		return false;
	if(L.length>=MaxSize)
		return false;
	for(int j=L.length;j>=i;j--)//移动顺序表中的元素
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;//数组下标从零开始，插入第一个位置，访问的下标为0
	L.length++;
	return true;
}

int main(){
	
	bool ret;//查看返回值
	
	SqList L;//顺序表的名称
	L.data[0]=1;
	L.data[1]=2;
	L.data[2]=3;

	L.length=3;//总计三个元素
	ret=ListInsert(L,2,60);

	PrintList(L);

}
