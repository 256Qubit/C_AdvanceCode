#include <stdio.h>
#define MaxSize 10
typedef struct {
    int data[MaxSize];//用静态的数组存储数据元素
    int length;//顺序表的当前长度
}SqlList;//定义一个顺序表的名称和类型
void InitList(SqlList &L){
    for (int i = 0; i < MaxSize; ++i) {
        L.data[i]=0;//将顺序表每个数据元素初始化
    }
    L.length=0;//顺序表当前长度为0
}
bool ListInsert(SqlList &L,int i,int e){
    if (i<1||i>L.length+1) {
        return false;
    }
    if(L.length>=MaxSize){
        return false;
    }
    for (int j = L.length;j>=i; j--) {//将插入位置后的数据元素往后移
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;//将e赋值给插入位置
    L.length=L.length+1;//线性表长度+1
}
bool ListDelete(SqlList &L,int i,int &e){
    if(i<1||i>=L.length){//判断i的范围是否有效
        return false;
    }
    e=L.data[i-1];//将需要删除位置的数据元素赋值给e
    for (int j = i; j <L.length ; j++) {//从需要删除位置开始，之前的数据元素向前移动一位
        L.data[j-1]=L.data[j];
    }
    L.length--;//线性表长度减1
    return true;
}
int main() {
    SqlList L;//声明一个顺序表
    InitList(L);//初始化顺序表
    ListInsert(L,3,3);
    int e=-1;
    if(ListDelete(L,3,e)){
        printf("删除成功，删除元素为%d\n",e);
    } else{
        printf("位序不合法\n");
    }
    return 0;
}
