#include <iostream>

#define MAXSIZE 50
typedef struct{
    int *elem; //存储空间的基地址
    int length;//its length 
}SqList;

bool InitList(SqList &L);

using namespace std;

int main(){
    SqList L;
    InitList(L);
    cout << "ok" << endl;
    system("pause");
    return 0;
}

bool InitList(SqList &L){
    //构建一个空的顺序表
    L.elem = new int[MAXSIZE];
    if(!L.elem)
        return false;
    L.length = 0;
    return true;
}
