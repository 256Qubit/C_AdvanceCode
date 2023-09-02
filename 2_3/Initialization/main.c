#include <stdio.h>
#define MaxSize 10 //定义数据表最大长度

typedef struct {
    int data[MaxSize];//静态数组存放数据结构
    int length; //顺序表当前长度
}SqList;//顺序表的类型定义

//基本操作初始化一个顺序表
void InitList(SqList L){
    for (int i = 0; i < MaxSize; ++i) {
        L.data[i]=0;//将所有元素设置为默认初始值

        L.length=0;//顺序表初始长度为0
    }
}

int main() {
    SqList L;//声明一个顺序表
    InitList(L);//初始化一个顺序表
    return 0;
}
