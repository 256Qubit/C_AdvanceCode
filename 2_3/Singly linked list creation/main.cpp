#include <stdio.h>
#include <stdlib.h>
typedef struct LNode LNode;
typedef struct LNode* LinkList;
struct LNode{
    int data;
    struct LNode* next;
};

bool InitList(LinkList &L){
    L=(LNode*) malloc(sizeof(LNode));
    if(L==NULL){
        return false;
    }
    L->next=NULL;
    return true;
}

//bool ListInsert(LinkList &L,int i,int e){//按位插入
//    if(i<1){
//        return false;
//    }
//    LNode *p;
//    int j=0;
//    p=L;
//    while (p!=NULL&&j<i){
//        p=p->next;
//        j++;
//    }
//    if(p==NULL){
//        return false;//位序不合法
//    }
//    LNode *s=(LNode *) malloc(sizeof(LNode));
//    s->data=e;
//    s->data=p->data;
//    p->data=e;
//    return true;
//}
LinkList Link_TailInsert(LinkList &L){//正向建立单链表
    int x;//设置ElemType为整型
    L=(LinkList) malloc(sizeof(LNode));//建立头结点
    L->next=NULL;
    LNode *s,*r=L;//r为表尾指针
    scanf("%d",&x);
    while (x!=9999){//输入9999表示结束
        LNode *s=(LNode*) malloc(sizeof(LNode));
        s->data=x;
        r->next=s;//next指针作用:让r指针指向的结点指向s结点
        r=s;//r指向新的表位结点
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}
LinkList List_HeadInsert(LinkList &L){//逆向建立单链表
   LNode *s;
   int x;
   L=(LinkList) malloc(sizeof(LNode));
   L->next=NULL;
    scanf("%d",x);
    while (x!=9999){
        s=(LNode*) malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",x);
    }
    return L;
}
void test(){
    LinkList L;
    InitList(L);

}
int main() {
    return 0;
}
