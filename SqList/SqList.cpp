//静态顺序表
#include <iostream>
#include "SqList.h"





//基本操作--初始化一个顺序表
void InitList(SqList& L)
{
    for (int i = 0; i < MaxSize; i++)
    {
        L.date[i] = 0; //将所有数据元素设置为默认初始值0
    }
    L.length = 0; //顺序表初始长度设置为0
}

//基本操作--插入
bool ListInsert(SqList& L, int i, ElemType e) //在表L中的第i个位置插入指定元素e
{
    if (i < 1 || i > L.length + 1) //判断i范围是否有效
        return false;
    if (L.length >= MaxSize) //判断存储空间是否已满
        return false;
    for (int j = L.length; j >= i; j--)
        L.date[j] = L.date[j - 1]; //将第i个元素及之后的元素后移，从最后一个开始
    L.date[i - 1] = e;             //将要插入的元素e的值放在第i个位置
    L.length++;                    //顺序表的长度加一
    return true;                   //插入成功，返回true
}

//基本操作--删除
bool ListDelete(SqList& L,int i,int& e) 
{
    if (i<1 || i>L.length)//判断i范围是否有效
        return false;
    e = L.date[i - 1];//将被删除的元素赋值给e
    for (int j = i; j < L.length; j++)//将第i个位置后的元素前移
    {
        L.date[j - 1] = L.date[j];
    }
    L.length--;//线性表长度减1
    return true;
}

//基本操作--按位查找
ElemType GetElem(SqList L,int i)
{
    return L.date[i - 1];
}

//基本操作--按值查找
int LocateElem(SqList L, ElemType e) //在顺序表L中查找第一个元素值等于e的元素，并返回其位序
{
    for (int i = 0; i < L.length; i++) //遍历顺序表
    {
        if (L.date[i] == e)
            return i + 1;//数组下标为i的元素值等于e,返回其位序i+1
    }
    return 0;//退出循环，说明查找失败
}


