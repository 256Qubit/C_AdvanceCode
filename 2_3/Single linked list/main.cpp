#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode{//定义单链表类型结构
//    int data;//每个结点存放的数据类型
//    struct LNode *next;//指针指向下一个结点
//}LNode,*LinkList;

typedef struct LNode LNode;//定义LNode代替struct LNode
typedef struct LNode *LinkList;//定义一个LinkList表示指向LNode的指针（头指针）
struct LNode{
    int data;
    struct LNode *next;//next指针表示指向下一个结点的指针
};
bool InitList(LinkList &L){
    L=NULL;//空表暂时还没有任何结点
    return true;
}
bool Empty(LinkList L){//判断单链表是否为空
    if(L==NULL){
        return true;
    } else{
        return false;
    }
}

//bool Empty(LinkList L){
//    return (L==NULL);
//}
bool ListInsert(LinkList &L,int i,int e){
    if(i<1){
        return false;
    }
    if(i==1){
        LNode *s=(LNode*) malloc(sizeof(LNode));
        s->data=e;//先将L写到一边
        s->next=L;//让s的next指针指向L指针所指向的结点
        L=s;//将L指针指向结点
    }
    LNode *p;
    int j=1;
    p=L;
    while (p!=NULL&&j<i-1){
        p=p->next;
        p++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s=(LNode *) malloc(sizeof (LNode));
    s->data=e;
    s->next=p->next;//p指针指向L结点，将s结点指向P所指的结点
    p->next=s;//将p的next指针指向s结点
}
void test(){
    LinkList L;//声明一个指向单链表的指针，此刻没有创建一个结点
    InitList(L);//调用InitList函数，初始化一个空表
    Empty(L);

};
int main() {
    return 0;
}
