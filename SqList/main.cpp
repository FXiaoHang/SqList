#include<iostream>
#include<cstdio>
using namespace std;
#include"SqList.h"
#include"test.h"

int main()
{
	SqList L;
	InitList(L);
	L.date[0] = 1;
	L.date[1] = 2;
	L.length = 2;
	testListInsert(L);
	testListDelete(L);
	testGetElem(L);
	testLocateElem(L);
	return 0;
}