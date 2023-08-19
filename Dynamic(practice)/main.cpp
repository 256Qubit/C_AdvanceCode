#include <stdio.h>
#include <stdlib.h>
#define InitSize 10
typedef struct {//定义一个名为SqlList的线性表
    int *data;
    int MaxSize;
    int length;
}SqlList;

void InitList(SqlList &L){//对线性表进行初始化
    L.data=(int*) malloc(InitSize* sizeof(int));//用malloc函数申请一块大小为InitSize*sizeof(int)大小的连续空间,让data指针指向该空间
    L.MaxSize=InitSize;//初始化线性表的最大长度为InitSize
    L.length=0;//线性表的当前长度为0
}

void IncreaseSize(SqlList &L,int len){
    int *p=L.data;//定义一个p指针，将L的地址赋值给p指针 L和p指向空一块空间
    L.data=(int*) malloc((InitSize+len)*sizeof(int));//申请一块(InitSize+len)*sizeof(int)大小的空间,同时让data指针指向新申请的空间
    for (int i = 0; i < L.length; ++i) {
        L.data[i]=p[i];//将p指向的原L空间逐一转移到新空间之中
    }
    L.MaxSize=L.MaxSize+len;//L的最大长度加len
    free(p);//释放原来的L空间
}
int GetElem(SqlList &L,int i){
    return L.data[i-1];
}

int main() {
    SqlList L;
    InitList(L);
    IncreaseSize(L,5);
    GetElem(L,3);
    return 0;
}
