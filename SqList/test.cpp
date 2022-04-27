#include"SqList.h"



void testListInsert(SqList L)
{
    bool test1 = ListInsert(L, 2, 3);
    if (test1)
        cout << "插入成功" << endl;
    cout << L.date[0] <<"\n" << L.date[1] <<"\n" << L.date[2]<<"\n" << endl;
}

void testListDelete(SqList L)
{
    bool test1 = ListInsert(L, 2, 3);
    int i = -1;
    bool test2 = ListDelete(L, 1, i);
    if (test2)
        cout << "删除成功" << endl;
    cout << "删除元素为"<<i << endl;
    cout << L.date[0] << "\n" << L.date[1] << "\n" << L.date[2] << "\n" << endl;
}

void testGetElem(SqList L)
{
    ListInsert(L,3,3);
    int i=GetElem(L, 2);
    cout <<"查找元素位序为" << i << endl;
}

void testLocateElem(SqList L)
{
    ListInsert(L, 3, 3);
    int i = LocateElem(L, 3);
    cout << "查找元素位序为" << i << endl;
}