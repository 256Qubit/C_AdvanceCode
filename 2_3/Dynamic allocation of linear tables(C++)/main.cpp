#include <stdio.h>
#include <stdlib.h>
#define InitSize 10

//typedef struct {
//    int *data;
//    int MaxSize;
//    int length;
//}SqlList;
//
//void InitList(SqlList &L){
//    L.data=(int *) malloc(InitSize*sizeof(int));
//    L.length=0;
//    L.MaxSize= InitSize;
//}
//
//void IncreaseSize(SqlList &L,int len){
//    int *p=L.data;
//    L.data=(int*) malloc((InitSize+len)*sizeof(int));
//    for (int i = 0; i < L.length; ++i) {
//        L.data[i]=p[i];
//    }
//    L.MaxSize=L.MaxSize+len;
//}

typedef struct {
    int *data;
    int MaxSize;
    int length;
}SqlList;

void InitList(SqlList &L){
    L.data=(int*)malloc(InitSize*sizeof(int));
    L.MaxSize= InitSize;
    L.length=0;
}
void IncreaseSize(SqlList &L,int len){
    int *p=L.data;
    L.data=(int *) malloc((InitSize+len)*sizeof(int));
    for (int i = 0; i < L.length; ++i) {
        L.data[i]=p[i];
    }
    L.length=L.MaxSize+len;
}
int main() {
    SqlList L;
    InitList(L);
    IncreaseSize(L,6);
    return 0;
}
