#include <stdio.h>
#include <stdlib.h>

typedef struct LNode LNode;//定义LNode代替struct LNode
typedef struct LNode *LinkList;//定义一个LinkList表示指向LNode的指针（头指针）
struct LNode{
    int data;
    struct LNode *next;//next指针表示指向下一个结点的指针
};
LNode *GetElem(LinkList L,int i){//按位查找
    if(i<0){
        return NULL;

    }
    LNode *p;//指针p指向当前扫描到的结点
    int j=0;//当前p指向的是第几个结点
    p=L;//L指针指向头结点，头结点是第0个结点，不储存数据
    while (p!=NULL&&j<i){//循环找到第i个结点
        p=p->next;
        j++;
    }
    return p;
}
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
bool LintNextInsert(LNode *p,int e){
    if(p==NULL){
        return false;
    }
    LNode *s=(LNode *) malloc(sizeof(LNode));
    if(s==NULL){
        return false;
    }
    s->data=e;//将s结点储存数据e
    s->next=p->next;//s结点next指针指向p结点指向的结点
    p->next=s;//p的next指针指向s结点
    return true;

}
bool LintInsert(LinkList &L,int i,int e){//指定插入操作
    if(i<1){
        return false;
    }
    LNode *p= GetElem(L,i-1);//按位查找封装
    return LintNextInsert(p,e);//后插操作封装
//    LNode *p;//指针p指向当前扫描到的结点
//    int j=0;//当前p指向的是第几个结点
//    p=L;//L指向头结点，头结点是第0个结点，不储存数据
//    while (p!=NULL&&j<i-1){//循环找到第i-1个结点(第i位)
//        p=p->next;
//        j++;
//    }
//    if(p==NULL){//如果P指针指向NULL，i值位序不合法
//        return false;
//    }
//    LNode *s=(LNode*) malloc(sizeof(LNode));
//    s->data=e;
//    s->next=p->next;
//    p->next=s;
//    return true;
}
bool LintInsertPrior(LNode *p,int e){//前插操作
    if(p=NULL){
        return false;
    }
    LNode *s=(LNode *) malloc(sizeof(LNode));
    if(s==NULL){
        return false;
    }
    s->next=p->next;
    p->next=s;//将新结点连接到p之后
    s->data=p->data;
    p->data=e;
    return true;
}
bool ListDelete(LinkList &L,int i,int &e){//删除指定位置的结点
    if(i<1){
        return false;
    }
    LNode *p= GetElem(L,i-1);
//    LNode *p;//指针p指向当前扫描到的结点
//    int j=0;//当前p指向的是第几个结点
//    p=L;
//    while (p!=NULL&&j<i-1){//循环找到第i-1个结点
//        p=p->next;
//        j++;
//    }
    if(p==NULL){
        return false;
    }//i值不合法
    if(p->next==NULL){
        return false;//第i-1个结点之后已经无其他结点
    }
    LNode *q=p->next;//定义一个q结点指向p的next指针指向的结点（需要删除的结点）
    e=q->data;//将q结点中的内容复制到e之中
    p->next=q->next;//指向NULL
    free(p);
    return true;
}
bool DeleteNode(LNode *p){
    if(p==NULL){
        return false;
    }
    LNode *q=p->next;
    p->data=p->next->data;
//    p->data=q->data;
    p->next=q->next;
    free(q);
    return true;
}
LNode * LocateElem(LinkList L,int e){//按值查找
    LNode *p=L->next;
    //从第一个结点开始查找数值为e的结点
    while (p!=NULL&&p->data!=e){
        p=p->next;
    }
    return p;//找到后返回结点指针，否则返回NULL
}
void test(){
    LinkList L;
    InitList(L);
    Empty(L);
}
int main() {
    return 0;
}
