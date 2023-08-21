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
bool LintInsert(LinkList &L,int i,int e){
    if(i<1){
        return false;
    }
    LNode *p;//指针p指向当前扫描到的结点
    int j=0;//当前p指向的是第几个结点
    p=L;//L指向头结点，头结点是第0个结点，不储存数据
    while (p!=NULL&&j<i-1){//循环找到第i-1个结点(第i位)
        p=p->next;
        j++;
    }
    if(p==NULL){//如果P指针指向NULL，i值位序不合法
        return false;
    }
    LNode *s=(LNode*) malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
void test(){
    LinkList L;
    InitList(L);
    Empty(L);
}
int main() {
    return 0;
}
