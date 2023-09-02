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
bool ListDelete(SqList &L,int i,int &e){
    if(i<1||i>L.length){//判断i的范围是否有效
        return false;
    }
    e=L.data[i-1];//将被删除的元素赋值给e
    for(int j=i;j<L.length;j--){//将第i位置后的元素前移
        L.data[j-1]=L.data[i];
    }
    L.length--;//线性表长度减1
    return true;
}
int GetElem(SqList L,int i){
    return L.data[i-1];
};

int LocateElem(SqList L,int e){
    for (int i=0;i<L.length;i++) {
        if(L.data[i]==e){
            return i+1;
        }
    }
}

int main() {
    SqList L;//声明一个顺序表
    InitList(L);//初始化一个顺序表

    ListInsert(L,3,3);

    int e=-1;
    if(ListDelete(L,3,e)){
        printf("已删除第%d个元素，删除元素值为%d\n",3,e,);
    } else{
        printf("位序i不合法，删除失败\n");
    }

//    for (int i = 0; i < MaxSize; ++i)
//    for (int i = 0; i <L.length; ++i) {
//        printf("data[%d]=%d\n",i,L.data[i]);
//    }
    return 0;
}
