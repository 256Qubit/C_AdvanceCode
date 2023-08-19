#include <stdio.h>
#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int length;
}SqlList;
void InitList(SqlList &L){
    for (int i = 0; i < MaxSize; ++i) {
        L.data[i]=0;
    }
    L.length=0;
}
int main() {
    SqlList L;//声明一个顺序表
    return 0;
}
