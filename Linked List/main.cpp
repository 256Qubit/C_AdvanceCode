#include <stdio.h>
#include <stdlib.h>

typedef struct LNode LNode;//定义LNode代替struct LNode
typedef struct LNode *LinkList;//定义一个LinkList表示指向LNode的指针（头指针）
struct LNode{
    int data;
    struct LNode *next;//next指针表示指向下一个结点的指针
};
bool InitList(LinkList &L){
    L=(LNode*) malloc(sizeof(LNode));//分配一个头结点，并且将malloc的地址赋值给L
    if(L==NULL){//如果L为空，则证明内存不足，分配失败
        return false;
    }
    L->next=NULL;//头结点之后暂时没有头结点
    return true;
}
bool Empty(LinkList L){
    if(L->next==NULL){//判断头结点的Next指针域是否为NULL，如果为NULL，证明头结点后不存在数据
        return true;
    } else{
        return false;
    }
}
//bool Empty(LinkList L){
//    return (L->next==NULL);
//}
void test(){
    LinkList L;
    InitList(L);
    Empty(L);
}
int main() {
    return 0;
}
