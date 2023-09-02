#include <stdio.h>
#include <stdlib.h>
typedef struct LNode LNode;
typedef struct LNode *LinkList;
struct LNode{
  int data;
  struct LNode *next;
};
bool InitList(LinkList L){
    L=NULL;
    return true;
}
bool Empty(LinkList L){
    return (L==NULL);
}
bool ListInsert(LinkList &L,int i,int e){
    if(i<1){
        return false;
    }
    if(i==1){
        LNode *s=(LNode*) malloc(sizeof(LNode));
        s->data=e;
        s->next=L->next;
        L=s;
    }
    LNode *p;
    int j=1;
    while (p!=NULL&&j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s=(LNode*) malloc(sizeof(LNode));
    s->data=e;
    s->next=L->next;
    L->next=s;
    return true;
}
void test(){
    LinkList L;
}

int main() {
    return 0;
}
