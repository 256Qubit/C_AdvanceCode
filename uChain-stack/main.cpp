#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10
typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode,*LiStack;
LinkNode *GetTop(LiStack L,int i){//typedef LinkNode LinkNode
    if(L->next==NULL){
        return NULL;
    }
    LinkNode *p;
    p=L;
    p=p->next;
    return p;

}
bool Pop(LiStack &L,int &e){
    LinkNode *p;
    p=L;
    if(p->next==NULL){
        free(p);
        return true;
    }
    LinkNode *q=p->next;
    e=q->data;
    p->next=q->next;
    free(q);
    return true;
}
bool Push(LiStack &L,int e){//LiStack &s=typedef LinkNode *LiStack
    LinkNode *p;
    p=L;
    LinkNode *s=(LinkNode*) malloc(sizeof(LinkNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
bool InitStack(LiStack &s){//LiStack &s=typedef LinkNode *LiStack
    s=(LinkNode*) malloc(sizeof(LinkNode));
    if(s==NULL){//内存不足，分配失败
        return false;
    }
    s->next=NULL;
    return true;

}


int main() {
    LiStack L;
    InitStack(L);
    return 0;
}
