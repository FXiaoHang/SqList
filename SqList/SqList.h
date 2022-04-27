#ifndef _SqList_h
#define _Sqlist_h

#include<iostream>
using namespace std;

#define ElemType int
#define MaxSize 10


//顺序表的定义--静态分配
typedef struct
{
    ElemType date[MaxSize];
    int length;
} SqList;


void InitList(SqList& L);                      //顺序表的初始化

bool ListInsert(SqList& L, int i, ElemType e); //基本操作--插入，在表L中的第i个位置插入指定元素e,平均时间复杂度O(n)

bool ListDelete(SqList& L, int i, int& e);//基本操作--删除，删除第i个元素,平均时间复杂度O(n)

ElemType GetElem(SqList L, int i);//基本操作--按位查找,平均时间复杂度O(1)

int LocateElem(SqList L, ElemType e);//基本操作--按值查找
											
#endif