#include <stdio.h>
#include <stdlib.h>
typedef struct DNode{
    int data;
    struct DNode *prior,*next;
}DNode,*DLinkList;
bool InitDLinkList(DLinkList &L){
    L=(DNode*) malloc(sizeof(DNode));
    if(L==NULL){
        return false;
    }
    L->prior=NULL;
    L->next=NULL;
    return true;
}
bool Empty(DLinkList L){
    if(L->next==NULL){
        return true;
    } else{
        return false;
    }
}
//bool InsertNextDNode(DNode *p,DNode *s){
//s->next=p->next;//将结点s插入到p结点之后
//p->next->prior=s;
//s->prior=p;
//p->next=s;
//}

bool InsertNextDNode(DNode *p,DNode *s){
    if(p==NULL||s==NULL){
        return false;
    }
    s->next=p->next;
    if(p->next!=NULL){
        p->next->prior=s;//p有后继结点继续执行此操作
    }
    s->prior=p;
    p->next=s;
    return true;
}
bool DeleteNextDNode(DNode *p){
    if(p==NULL){
        return false;
    }
    DNode *q=p->next;//找到p结点后的q结点p的next指针指向的结点
    if (q=NULL){
        return false;
    }
    p->next=q->next;
    if(q->next!=NULL){
        q->next->prior=p;
    }
    free(q);
    return true;
}
void DestructionList(DLinkList &L){
    while (L->next!=NULL){
        DeleteNextDNode(L);
    }
    free(L);
    L=NULL;
}

void test(){
    DLinkList L;
    InitDLinkList(L);
    DNode *p;
    while (p!=NULL){//后向遍历
        p=p->next;
    }
    while (p!=NULL){//前向遍历
        p=p->prior;
    }
    while (p->prior!=NULL){//前向遍历（跳过头结点）
        p=p->prior;
    }


}
int main() {

    return 0;
}
