#include <stdio.h>
#define MaxSize 10 //定义数据表最大长度

typedef struct {
    int data[MaxSize];//静态数组存放数据结构
    int length; //顺序表当前长度
}SqList;//顺序表的类型定义

//基本操作初始化一个顺序表
void InitList(SqList &L){
    for (int i = 0; i < MaxSize; ++i) {
        L.data[i]=0;//将所有元素设置为默认初始值

        L.length=0;//顺序表初始长度为0
    }
}
bool ListInsert(SqList &L,int i,int e){
    if(i<1||i>L.length+1){//判断i范围是否有效
        return false;
    }
    if(L.length>=MaxSize){//当前空间已满，不能插入
        return false;
    }
    for(int j=L.length;j>i;j--){//将第i个元素之后往后移
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;//在第i处放置e
    L.length++;//长度加1

    return true;

}

int main() {
    SqList L;//声明一个顺序表
    InitList(L);//初始化一个顺序表

    ListInsert(L,3,3);

//    for (int i = 0; i < MaxSize; ++i)
//    for (int i = 0; i <L.length; ++i) {
//        printf("data[%d]=%d\n",i,L.data[i]);
//    }
    return 0;
}
